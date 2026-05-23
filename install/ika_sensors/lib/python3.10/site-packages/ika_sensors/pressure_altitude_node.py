#!/usr/bin/env python3

import math
import random

import rclpy
from rclpy.node import Node

from ika_msgs.msg import EnvironmentData


class PressureAltitudeNode(Node):
    def __init__(self):
        super().__init__("pressure_altitude_node")

        self.declare_parameter("topic_name", "/pressure/altitude")
        self.declare_parameter("frame_id", "pressure_sensor_link")
        self.declare_parameter("publish_rate_hz", 5.0)
        self.declare_parameter("sea_level_pressure_pa", 101325.0)
        self.declare_parameter("use_simulated_data", True)

        self.topic_name = self.get_parameter("topic_name").value
        self.frame_id = self.get_parameter("frame_id").value
        self.publish_rate_hz = float(self.get_parameter("publish_rate_hz").value)
        self.sea_level_pressure_pa = float(
            self.get_parameter("sea_level_pressure_pa").value
        )
        self.use_simulated_data = bool(self.get_parameter("use_simulated_data").value)

        self.publisher = self.create_publisher(
            EnvironmentData,
            self.topic_name,
            10
        )

        timer_period = 1.0 / self.publish_rate_hz
        self.timer = self.create_timer(timer_period, self.publish_pressure_altitude)

        self.get_logger().info(
            f"Pressure altitude node started. Publishing: {self.topic_name}"
        )

    def read_pressure_sensor(self):
        if self.use_simulated_data:
            pressure_pa = 101325.0 + random.uniform(-80.0, 80.0)
            temperature_celsius = 25.0 + random.uniform(-1.5, 1.5)
            return pressure_pa, temperature_celsius

        raise NotImplementedError("Real pressure sensor reading is not implemented yet.")

    def calculate_altitude(self, pressure_pa):
        if pressure_pa <= 0.0:
            return 0.0

        altitude_m = 44330.0 * (
            1.0 - math.pow(pressure_pa / self.sea_level_pressure_pa, 0.1903)
        )
        return altitude_m

    def publish_pressure_altitude(self):
        try:
            pressure_pa, temperature_celsius = self.read_pressure_sensor()
            altitude_m = self.calculate_altitude(pressure_pa)

            msg = EnvironmentData()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = self.frame_id

            msg.temperature_celsius = float(temperature_celsius)
            msg.relative_humidity_percent = 0.0

            msg.pressure_pa = float(pressure_pa)
            msg.altitude_m = float(altitude_m)

            msg.rain_detected = False
            msg.water_detected = False

            msg.sensor_status = "PRESSURE_ALTITUDE_OK"

            self.publisher.publish(msg)

        except Exception as error:
            self.get_logger().error(f"Pressure/altitude read error: {error}")


def main(args=None):
    rclpy.init(args=args)
    node = PressureAltitudeNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()