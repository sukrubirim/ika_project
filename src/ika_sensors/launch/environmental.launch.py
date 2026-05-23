from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    temp_humidity_node = Node(
        package="ika_sensors",
        executable="temp_humidity_node",
        name="temp_humidity_node",
        output="screen",
        parameters=[
            {
                "topic_name": "/environment/temp_humidity",
                "frame_id": "temp_humidity_link",
                "publish_rate_hz": 2.0,
                "use_simulated_data": True,
            }
        ],
    )

    pressure_altitude_node = Node(
        package="ika_sensors",
        executable="pressure_altitude_node",
        name="pressure_altitude_node",
        output="screen",
        parameters=[
            {
                "topic_name": "/pressure/altitude",
                "frame_id": "pressure_sensor_link",
                "publish_rate_hz": 5.0,
                "sea_level_pressure_pa": 101325.0,
                "use_simulated_data": True,
            }
        ],
    )

    laser_range_node = Node(
        package="ika_sensors",
        executable="laser_range_node",
        name="laser_range_node",
        output="screen",
        parameters=[
            {
                "topic_name": "/range/front",
                "frame_id": "front_laser_range_link",
                "publish_rate_hz": 10.0,
                "min_range": 0.02,
                "max_range": 12.0,
                "field_of_view": 0.05,
                "use_simulated_data": True,
            }
        ],
    )

    return LaunchDescription(
        [
            temp_humidity_node,
            pressure_altitude_node,
            laser_range_node,
        ]
    )