#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
import time

class SteepHillStopNode(Node):
    def __init__(self):
        super().__init__("steep_hill_stop_node")
        self.odom_sub = self.create_subscription(Odometry, '/odom', self.odom_cb, 10)
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        
        self.stopped_at_up = False
        self.stopped_at_down = False
        
        self.get_logger().info("Steep Hill Stop Node Started.")

    def odom_cb(self, msg):
        x = msg.pose.pose.position.x
        
        # Steep hill up is around x = 53
        if 51.5 < x < 52.5 and not self.stopped_at_up:
            self.get_logger().info("Steep hill UP detected! Stopping for 2 seconds...")
            self.stop_robot()
            self.stopped_at_up = True
            
        # Steep hill down is around x = 56
        elif 55.5 < x < 56.5 and not self.stopped_at_down:
            self.get_logger().info("Steep hill DOWN detected! Stopping for 2 seconds...")
            self.stop_robot()
            self.stopped_at_down = True

    def stop_robot(self):
        stop_msg = Twist()
        stop_msg.linear.x = 0.0
        stop_msg.angular.z = 0.0
        
        # Publish stop message repeatedly for 2 seconds
        end_time = time.time() + 2.0
        while time.time() < end_time:
            self.cmd_vel_pub.publish(stop_msg)
            time.sleep(0.1)
        self.get_logger().info("Wait complete, resuming...")

def main(args=None):
    rclpy.init(args=args)
    node = SteepHillStopNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()
