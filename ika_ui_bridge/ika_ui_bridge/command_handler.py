import rclpy
from rclpy.node import Node
from std_msgs.msg import String, Bool
from typing import Optional


class CommandHandler:
    def __init__(self, node: Node, safety_manager: Optional[object] = None):
        self.node = node
        self.safety_manager = safety_manager
        # publishers for commands
        try:
            self.pub_mode = node.create_publisher(String, '/mission/set_mode', 10)
            self.pub_emergency = node.create_publisher(Bool, '/emergency_stop', 10)
            self.pub_laser_fire = node.create_publisher(Bool, '/laser/fire', 10)
            self.pub_laser_arm = node.create_publisher(Bool, '/laser/arm', 10)
            self.pub_data_logger = node.create_publisher(String, '/data_logger/command', 10)
        except Exception:
            # In some test environments publishers may fail; log and continue
            node.get_logger().warning('Some publishers could not be created in CommandHandler')

    def handle(self, cmd: dict):
        t = cmd.get('type')
        if t == 'set_mode':
            self._set_mode(cmd.get('mode'))
        elif t == 'emergency_stop':
            self._emergency_stop(cmd.get('active', True))
        elif t == 'laser_fire':
            self._laser_fire()
        elif t == 'laser_arm':
            self._laser_arm(cmd.get('active', True))
        elif t == 'data_logger':
            self._data_logger(cmd.get('command'))
        else:
            self.node.get_logger().info(f'Unknown command: {t}')

    def _set_mode(self, mode):
        if not mode:
            return
        try:
            msg = String()
            msg.data = str(mode)
            self.pub_mode.publish(msg)
            self.node.get_logger().info(f'CommandHandler: set_mode published={mode}')
        except Exception:
            self.node.get_logger().exception('Failed to publish set_mode')

    def _emergency_stop(self, active):
        try:
            msg = Bool()
            msg.data = bool(active)
            self.pub_emergency.publish(msg)
            self.node.get_logger().warn(f'CommandHandler: emergency_stop published={active}')
            # update safety manager if present
            if self.safety_manager:
                try:
                    self.safety_manager.set_emergency(bool(active))
                except Exception:
                    self.node.get_logger().exception('safety_manager.set_emergency failed')
        except Exception:
            self.node.get_logger().exception('Failed to publish emergency_stop')

    def _laser_arm(self, active: bool):
        try:
            msg = Bool()
            msg.data = bool(active)
            self.pub_laser_arm.publish(msg)
            self.node.get_logger().info(f'CommandHandler: laser_arm published={active}')
        except Exception:
            self.node.get_logger().exception('Failed to publish laser_arm')

    def _laser_fire(self):
        try:
            # safety check
            if self.safety_manager and not self.safety_manager.is_safe_to_fire():
                self.node.get_logger().warn('Laser fire blocked by safety_manager')
                return
            msg = Bool()
            msg.data = True
            self.pub_laser_fire.publish(msg)
            self.node.get_logger().info('CommandHandler: laser_fire published')
        except Exception:
            self.node.get_logger().exception('Failed to publish laser_fire')

    def _data_logger(self, command):
        try:
            if not command:
                return
            msg = String()
            msg.data = str(command)
            self.pub_data_logger.publish(msg)
            self.node.get_logger().info(f'CommandHandler: data_logger published {command}')
        except Exception:
            self.node.get_logger().exception('Failed to publish data_logger command')
