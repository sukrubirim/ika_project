from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ika_ui_bridge',
            executable='ui_bridge_node',
            name='ika_ui_bridge',
            output='screen'
        )
    ])
