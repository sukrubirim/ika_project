import os
import re

import xacro
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def _sanitize_robot_description(xml_text: str) -> str:
    """
    gazebo_ros2_control internally passes robot_description as a ROS parameter
    override. Gazebo Classic / ROS 2 Humble can fail if the URDF starts with
    <?xml ...?> or contains XML comments. Keep only clean URDF XML.
    """
    xml_text = re.sub(r'<\?xml.*?\?>', '', xml_text, flags=re.DOTALL).strip()
    xml_text = re.sub(r'<!--.*?-->', '', xml_text, flags=re.DOTALL).strip()
    xml_text = re.sub(r'>\s+<', '><', xml_text).strip()
    return xml_text


def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time')
    gui = LaunchConfiguration('gui')
    auto_slider = LaunchConfiguration('auto_slider')

    pkg_ika_gazebo = get_package_share_directory('ika_gazebo')
    pkg_ika_description = get_package_share_directory('ika_description')
    pkg_ika_control = get_package_share_directory('ika_control')
    pkg_gazebo_ros = get_package_share_directory('gazebo_ros')

    xacro_file = os.path.join(pkg_ika_description, 'urdf', 'robot.urdf.xacro')
    controllers_yaml = os.path.join(pkg_ika_control, 'config', 'rover_controllers.yaml')
    world_file = os.path.join(pkg_ika_gazebo, 'worlds', 'teknofest_track.world')

    robot_description_xml = xacro.process_file(
        xacro_file,
        mappings={
            'controllers_file': controllers_yaml,
        },
    ).documentElement.toxml()
    robot_description_xml = _sanitize_robot_description(robot_description_xml)

    gzserver = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_gazebo_ros, 'launch', 'gzserver.launch.py')
        ),
        launch_arguments={
            'world': world_file,
            'verbose': 'true',
        }.items(),
    )

    gzclient = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_gazebo_ros, 'launch', 'gzclient.launch.py')
        ),
        condition=IfCondition(gui),
    )

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{
            'use_sim_time': use_sim_time,
            'robot_description': ParameterValue(robot_description_xml, value_type=str),
        }],
    )

    spawn_entity = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        output='screen',
        arguments=[
            '-entity', 'rover',
            '-topic', '/robot_description',
            '-x', '0.0',
            '-y', '0.0',
            '-z', '0.62',
        ],
    )

    sliding_obstacle_controller = Node(
        package='ika_gazebo',
        executable='sliding_obstacle_controller.py',
        name='sliding_obstacle_controller',
        output='screen',
        condition=IfCondition(auto_slider),
        parameters=[{
            'speed_mps': 0.20,
            'limit_y': 1.0,
            'fallback_period_sec': 10.0,
            'use_sim_time': use_sim_time,
        }],
    )

    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value='true'),
        DeclareLaunchArgument('gui', default_value='true'),
        DeclareLaunchArgument('auto_slider', default_value='true'),
        gzserver,
        gzclient,
        robot_state_publisher,
        spawn_entity,
        sliding_obstacle_controller,
    ])
