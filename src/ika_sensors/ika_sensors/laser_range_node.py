#!/usr/bin/env python3

import random

import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Range


class LaserRangeNode(Node):
    def __init__(self):
        super().__init__("laser_range_node")

        self.declare_parameter("topic_name", "/range/front")
        self.declare_parameter("frame_id", "front_laser_range_link")
        self.declare_parameter("publish_rate_hz", 10.0)
        self.declare_parameter("min_range", 0.02)
        self.declare_parameter("max_range", 12.0)
        self.declare_parameter("field_of_view", 0.05)
        self.declare_parameter("use_simulated_data", True)

        self.topic_name = self.get_parameter("topic_name").value
        self.frame_id = self.get_parameter("frame_id").value
        self.publish_rate_hz = float(self.get_parameter("publish_rate_hz").value)
        self.min_range = float(self.get_parameter("min_range").value)
        self.max_range = float(self.get_parameter("max_range").value)
        self.field_of_view = float(self.get_parameter("field_of_view").value)
        self.use_simulated_data = bool(self.get_parameter("use_simulated_data").value)

        self.publisher = self.create_publisher(
            Range,
            self.topic_name,
            10
        )

        timer_period = 1.0 / self.publish_rate_hz
        self.timer = self.create_timer(timer_period, self.publish_range)

        self.get_logger().info(f"Laser range node started. Publishing: {self.topic_name}")

    def read_range_sensor(self):
        """
        Gerçek robotta VL53L0X, TF-Luna, Benewake LiDAR, lazer mesafe sensörü vb.
        buradan okunur.
        """
        if self.use_simulated_data:
            return random.uniform(0.4, 5.0)

        # TODO: Gerçek mesafe sensörü okuma kodu buraya gelecek.
        raise NotImplementedError("Real laser range sensor reading is not implemented yet.")

    def publish_range(self):
        try:
            distance_m = self.read_range_sensor()

            msg = Range()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = self.frame_id

            msg.radiation_type = Range.INFRARED
            msg.field_of_view = self.field_of_view
            msg.min_range = self.min_range
            msg.max_range = self.max_range
            msg.range = float(distance_m)

            self.publisher.publish(msg)

        except Exception as error:
            self.get_logger().error(f"Laser range read error: {error}")


def main(args=None):
    rclpy.init(args=args)
    node = LaserRangeNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()