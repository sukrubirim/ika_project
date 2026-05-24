import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    # TEKNOFEST UPDATE: ornek launch_sim mantigi IKA paketlerine uyarlandi.
    use_sim_time = LaunchConfiguration('use_sim_time')
    gui = LaunchConfiguration('gui')
    use_joystick = LaunchConfiguration('use_joystick')
    auto_slider = LaunchConfiguration('auto_slider')
    rviz = LaunchConfiguration('rviz')

    bringup_share = get_package_share_directory('ika_bringup')
    gazebo_share = get_package_share_directory('ika_gazebo')
    control_share = get_package_share_directory('ika_control')
    description_share = get_package_share_directory('ika_description')

    sim_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(gazebo_share, 'launch', 'teknofest_sim.launch.py')),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'gui': gui,
            'auto_slider': auto_slider,
        }.items(),
    )

    joystick = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(bringup_share, 'launch', 'joystick.launch.py')),
        launch_arguments={'use_sim_time': use_sim_time}.items(),
        condition=IfCondition(use_joystick),
    )

    # TEKNOFEST UPDATE: Nav2 ve joystick komutlari tek komuta dusurulur.
    # diff_drive_controller unstamped Twist bekledigi icin cikis dogrudan controller topic'ine remap edilir.
    twist_mux = Node(
        package='twist_mux',
        executable='twist_mux',
        name='twist_mux',
        output='screen',
        parameters=[
            os.path.join(bringup_share, 'config', 'twist_mux.yaml'),
            {'use_sim_time': use_sim_time},
        ],
        remappings=[('/cmd_vel_out', '/diff_drive_controller/cmd_vel_unstamped')],
    )

    controllers_launch = TimerAction(
        period=6.0,
        actions=[IncludeLaunchDescription(
            PythonLaunchDescriptionSource(os.path.join(control_share, 'launch', 'spawn_controllers.launch.py'))
        )],
    )

    # TEKNOFEST UPDATE: sim launch ile RViz acildiginda /scan ve kamera topicleri robot_view.rviz uzerinden izlenebilir.
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', os.path.join(description_share, 'rviz', 'robot_view.rviz')],
        condition=IfCondition(rviz),
    )

    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value='true'),
        DeclareLaunchArgument('gui', default_value='true'),
        DeclareLaunchArgument('use_joystick', default_value='true'),
        DeclareLaunchArgument('auto_slider', default_value='true'),
        DeclareLaunchArgument('rviz', default_value='true'),
        sim_launch,
        joystick,
        twist_mux,
        controllers_launch,
        rviz_node,
    ])
