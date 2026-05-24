import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, RegisterEventHandler, TimerAction
from launch.conditions import IfCondition
from launch.event_handlers import OnProcessStart
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # TEKNOFEST UPDATE: ornek launch_robot mantigi fiziksel robot icin eklendi.
    use_sim_time = LaunchConfiguration('use_sim_time')
    use_joystick = LaunchConfiguration('use_joystick')

    bringup_share = get_package_share_directory('ika_bringup')
    control_share = get_package_share_directory('ika_control')

    rsp = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(get_package_share_directory('ika_description'), 'launch', 'rsp.launch.py')),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'use_ros2_control': 'true',
            'rviz': 'false',
            'joint_state_publisher': 'false',
        }.items(),
    )

    robot_description = Command(['ros2 param get --hide-type /robot_state_publisher robot_description'])
    controller_params = os.path.join(control_share, 'config', 'rover_controllers.yaml')

    controller_manager = Node(
        package='controller_manager',
        executable='ros2_control_node',
        output='screen',
        parameters=[{'robot_description': robot_description}, controller_params],
    )

    delayed_controller_manager = TimerAction(period=3.0, actions=[controller_manager])

    joint_state_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['joint_state_broadcaster', '--controller-manager', '/controller_manager'],
        output='screen',
    )
    diff_drive_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['diff_drive_controller', '--controller-manager', '/controller_manager'],
        output='screen',
    )
    pan_tilt_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['pan_tilt_controller', '--controller-manager', '/controller_manager'],
        output='screen',
    )

    delayed_spawners = RegisterEventHandler(
        event_handler=OnProcessStart(
            target_action=controller_manager,
            on_start=[joint_state_spawner, diff_drive_spawner, pan_tilt_spawner],
        )
    )

    joystick = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(bringup_share, 'launch', 'joystick.launch.py')),
        launch_arguments={'use_sim_time': use_sim_time}.items(),
        condition=IfCondition(use_joystick),
    )

    twist_mux = Node(
        package='twist_mux',
        executable='twist_mux',
        name='twist_mux',
        output='screen',
        parameters=[os.path.join(bringup_share, 'config', 'twist_mux.yaml')],
        remappings=[('/cmd_vel_out', '/diff_drive_controller/cmd_vel_unstamped')],
    )

    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value='false'),
        DeclareLaunchArgument('use_joystick', default_value='true'),
        rsp,
        delayed_controller_manager,
        delayed_spawners,
        joystick,
        twist_mux,
    ])
