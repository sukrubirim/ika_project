#!/usr/bin/env python3
import math

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry


class SlidingObstacleController(Node):
    """Moves the TEKNOFEST sliding obstacle left-right at 0.2 m/s."""

    def __init__(self):
        super().__init__('sliding_obstacle_controller')
        self.declare_parameter('speed_mps', 0.20)
        self.declare_parameter('limit_y', 1.0)
        self.declare_parameter('fallback_period_sec', 10.0)

        self.speed = float(self.get_parameter('speed_mps').value)
        self.limit_y = float(self.get_parameter('limit_y').value)
        self.fallback_period_sec = float(self.get_parameter('fallback_period_sec').value)

        self.direction = 1.0
        self.last_y = None
        self.start_time = self.get_clock().now()

        self.cmd_pub = self.create_publisher(Twist, '/slider/cmd_vel', 10)
        self.odom_sub = self.create_subscription(Odometry, '/slider/odom', self.odom_cb, 10)
        self.timer = self.create_timer(0.05, self.timer_cb)

        self.get_logger().info(
            f'Sliding obstacle controller started: speed={self.speed} m/s, limit_y=±{self.limit_y} m'
        )

    def odom_cb(self, msg: Odometry):
        self.last_y = msg.pose.pose.position.y
        if self.last_y >= self.limit_y:
            self.direction = -1.0
        elif self.last_y <= -self.limit_y:
            self.direction = 1.0

    def timer_cb(self):
        # If odom is not available, still reverse periodically so the obstacle does not run away forever.
        if self.last_y is None:
            elapsed = (self.get_clock().now() - self.start_time).nanoseconds / 1e9
            phase = int(elapsed // self.fallback_period_sec)
            self.direction = 1.0 if phase % 2 == 0 else -1.0

        msg = Twist()
        msg.linear.y = self.direction * self.speed
        self.cmd_pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = SlidingObstacleController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        stop = Twist()
        node.cmd_pub.publish(stop)
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
