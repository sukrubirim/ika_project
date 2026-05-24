#!/usr/bin/env python3
import random
import rclpy
from rclpy.node import Node
from ika_msgs.msg import EnvironmentData
from nav_msgs.msg import Odometry

class TempHumidityNode(Node):
    def __init__(self):
        super().__init__("temp_humidity_node")
        self.declare_parameter("topic_name", "/environment/temp_humidity")
        self.declare_parameter("frame_id", "temp_humidity_link")
        self.declare_parameter("publish_rate_hz", 2.0)
        self.declare_parameter("use_simulated_data", True)

        self.topic_name = self.get_parameter("topic_name").value
        self.frame_id = self.get_parameter("frame_id").value
        self.publish_rate_hz = float(self.get_parameter("publish_rate_hz").value)
        self.use_simulated_data = bool(self.get_parameter("use_simulated_data").value)

        self.publisher = self.create_publisher(EnvironmentData, self.topic_name, 10)
        self.odom_sub = self.create_subscription(Odometry, '/odom', self.odom_callback, 10)
        
        self.robot_x = 0.0
        self.robot_y = 0.0

        timer_period = 1.0 / self.publish_rate_hz
        self.timer = self.create_timer(timer_period, self.publish_temp_humidity)

        self.get_logger().info(f"Temp humidity node started. Publishing: {self.topic_name}")

    def odom_callback(self, msg):
        self.robot_x = msg.pose.pose.position.x
        self.robot_y = msg.pose.pose.position.y

    def read_sensor(self):
        if self.use_simulated_data:
            temperature = 25.0 + random.uniform(-2.0, 2.0)
            humidity = 55.0 + random.uniform(-5.0, 5.0)
            return temperature, humidity
        raise NotImplementedError("Real temp/humidity sensor reading is not implemented yet.")

    def publish_temp_humidity(self):
        try:
            temperature, humidity = self.read_sensor()
            msg = EnvironmentData()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = self.frame_id
            msg.temperature_celsius = float(temperature)
            msg.relative_humidity_percent = float(humidity)
            msg.pressure_pa = 0.0
            msg.altitude_m = 0.0
            
            # Water trench is around X=10m in the world file (size 3x3)
            # So X between 8.5 and 11.5
            if 8.5 < self.robot_x < 11.5:
                msg.rain_detected = True
                msg.water_detected = True
            else:
                msg.rain_detected = False
                msg.water_detected = False

            msg.sensor_status = "TEMP_HUMIDITY_OK"
            self.publisher.publish(msg)
        except Exception as error:
            self.get_logger().error(f"Temp/humidity read error: {error}")

def main(args=None):
    rclpy.init(args=args)
    node = TempHumidityNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()
