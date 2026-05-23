from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    imu_node = Node(
        package="imu_filter_madgwick",
        executable="imu_filter_madgwick_node",
        name="imu_filter_node",
        output="screen",
        parameters=[
            {
                "use_mag": False,
                "publish_tf": False,
                "world_frame": "enu",
            }
        ],
        remappings=[
            ("imu/data_raw", "/imu/data_raw"),
            ("imu/data", "/imu/data"),
        ],
    )

    return LaunchDescription(
        [
            imu_node,
        ]
    )