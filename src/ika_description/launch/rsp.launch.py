from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.substitutions import Command, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # TEKNOFEST UPDATE: ornek/rsp.launch.py gibi use_ros2_control ve sim_mode argumanlari eklendi.
    use_sim_time = LaunchConfiguration('use_sim_time')
    use_ros2_control = LaunchConfiguration('use_ros2_control')
    rviz = LaunchConfiguration('rviz')
    joint_state_publisher = LaunchConfiguration('joint_state_publisher')
    controllers_file = LaunchConfiguration('controllers_file')

    robot_description_path = PathJoinSubstitution([
        FindPackageShare('ika_description'),
        'urdf',
        'robot.urdf.xacro',
    ])

    robot_description = ParameterValue(
        Command([
            'xacro ', robot_description_path,
            ' use_ros2_control:=', use_ros2_control,
            ' sim_mode:=', use_sim_time,
            ' controllers_file:=', controllers_file,
        ]),
        value_type=str,
    )

    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{
            'use_sim_time': use_sim_time,
            'robot_description': robot_description,
        }],
    )

    # TEKNOFEST UPDATE: ros2_control kullanilmadigi yalniz RViz testlerinde joint_state_publisher opsiyonel calisir.
    joint_state_publisher_node = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        output='screen',
        condition=IfCondition(joint_state_publisher),
    )

    rviz_config_path = PathJoinSubstitution([
        FindPackageShare('ika_description'),
        'rviz',
        'robot_view.rviz',
    ])

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_config_path],
        condition=IfCondition(rviz),
    )

    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value='false'),
        DeclareLaunchArgument('use_ros2_control', default_value='true'),
        DeclareLaunchArgument('rviz', default_value='true'),
        DeclareLaunchArgument('joint_state_publisher', default_value='false'),
        DeclareLaunchArgument(
            'controllers_file',
            default_value=PathJoinSubstitution([
                FindPackageShare('ika_control'),
                'config',
                'rover_controllers.yaml',
            ]),
        ),
        robot_state_publisher_node,
        joint_state_publisher_node,
        rviz_node,
    ])
