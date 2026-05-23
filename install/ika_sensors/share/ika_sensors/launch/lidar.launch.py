from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    lidar_node = Node(
        package="rplidar_ros",
        executable="rplidar_composition",
        name="lidar_node",
        output="screen",
        parameters=[
            {
                "serial_port": "/dev/ttyUSB0",
                "serial_baudrate": 115200,
                "frame_id": "lidar_link",
                "inverted": False,
                "angle_compensate": True,
            }
        ],
        remappings=[
            ("scan", "/scan"),
        ],
    )

    return LaunchDescription(
        [
            lidar_node,
        ]
    )