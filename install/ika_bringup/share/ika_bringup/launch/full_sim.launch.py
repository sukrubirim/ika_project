from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    sim_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare('ika_gazebo'),
                'launch',
                'teknofest_sim.launch.py',
            ])
        ),
        launch_arguments={
            'use_sim_time': 'true',
            'gui': 'true',
            'auto_slider': 'true',
        }.items(),
    )

    controllers_launch = TimerAction(
        period=10.0,
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    PathJoinSubstitution([
                        FindPackageShare('ika_control'),
                        'launch',
                        'spawn_controllers.launch.py',
                    ])
                )
            )
        ],
    )

    return LaunchDescription([
        sim_launch,
        controllers_launch,
    ])
