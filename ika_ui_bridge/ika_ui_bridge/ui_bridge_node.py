import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Bool
import threading
import asyncio
import logging
from aiohttp import web

from .status_cache import StatusCache
from .message_mapper import battery_to_dict, imu_to_dict, gps_to_dict
from .command_handler import CommandHandler
from .websocket_server import WebSocketServer
from .rest_server import RestServer

class UiBridgeNode(Node):
    def __init__(self):
        super().__init__('ika_ui_bridge')
        self.status_cache = StatusCache()
        # safety manager must be created and passed to the command handler
        from .safety_manager import SafetyManager
        self.safety_manager = SafetyManager(self.status_cache)
        self.command_handler = CommandHandler(self, safety_manager=self.safety_manager)
        self.ws_server = WebSocketServer(self.status_cache, self.command_handler)
        self.rest_server = RestServer(self.status_cache, self.command_handler)

        # Subscriptions to commonly used topics (best-effort mapping)
        # mission state (string)
        self.create_subscription(String, '/mission/state', self._mission_cb, 10)
        # emergency stop (bool)
        try:
            self.create_subscription(Bool, '/emergency_stop', self._emergency_cb, 10)
        except Exception:
            self.get_logger().info('No Bool type for /emergency_stop; ensure topic type')

        # Topic names for common sensors - subscribers will ignore if not present
        try:
            from sensor_msgs.msg import BatteryState, Imu
            from sensor_msgs.msg import NavSatFix
            self.create_subscription(BatteryState, '/battery_state', self._battery_cb, 10)
            self.create_subscription(Imu, '/imu/data', self._imu_cb, 10)
            self.create_subscription(NavSatFix, '/gps/fix', self._gps_cb, 10)
        except Exception:
            self.get_logger().warning('sensor_msgs types not available in this environment')

    def _mission_cb(self, msg):
        try:
            self.status_cache.update('mission_state', msg.data)
        except Exception:
            self.get_logger().exception('mission_cb')

    def _emergency_cb(self, msg):
        try:
            val = bool(msg.data)
            self.status_cache.update('emergency_stop', val)
        except Exception:
            self.get_logger().exception('emergency_cb')

    def _battery_cb(self, msg):
        try:
            self.status_cache.update('battery', battery_to_dict(msg))
        except Exception:
            self.get_logger().exception('battery_cb')

    def _imu_cb(self, msg):
        try:
            self.status_cache.update('imu', imu_to_dict(msg))
        except Exception:
            self.get_logger().exception('imu_cb')

    def _gps_cb(self, msg):
        try:
            self.status_cache.update('gps', gps_to_dict(msg))
        except Exception:
            self.get_logger().exception('gps_cb')

    def start_servers(self):
        # Run websocket + aiohttp REST in a dedicated asyncio event loop in a background thread
        def _async_thread():
            loop = asyncio.new_event_loop()
            asyncio.set_event_loop(loop)
            # start websocket server
            ws_coro = self.ws_server.start()
            server = loop.run_until_complete(ws_coro)
            # setup aiohttp REST app runner inside same event loop
            try:
                runner = web.AppRunner(self.rest_server.app)
                loop.run_until_complete(runner.setup())
                site = web.TCPSite(runner, self.rest_server.host, self.rest_server.port)
                loop.run_until_complete(site.start())
            except Exception as e:
                self.get_logger().exception('rest setup failed')
            # start broadcaster task
            loop.create_task(self.ws_server.broadcaster())
            self.get_logger().info('UI bridge servers running (WS + REST)')
            try:
                loop.run_forever()
            finally:
                server.close()
                loop.run_until_complete(server.wait_closed())

        t = threading.Thread(target=_async_thread, daemon=True)
        t.start()
        self.get_logger().info('UI bridge servers thread started')

def main(args=None):
    rclpy.init(args=args)
    node = UiBridgeNode()
    try:
        node.start_servers()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
