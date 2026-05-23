from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Mission Manager Node
        Node(
            package='ika_autonomi',
            executable='mission_manager',
            name='mission_manager',
            output='screen'
        ),
        # Motor Controller Node
        Node(
            package='ika_autonomi',
            executable='motor_controller',
            name='motor_controller',
            output='screen'
        )
    ])