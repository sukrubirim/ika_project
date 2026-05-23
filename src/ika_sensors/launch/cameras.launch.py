from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    front_camera = Node(
        package="v4l2_camera",
        executable="v4l2_camera_node",
        name="front_camera",
        output="screen",
        parameters=[
            {
                "video_device": "/dev/video0",
                "image_size": [640, 480],
                "camera_frame_id": "front_camera_link",
            }
        ],
        remappings=[
            ("image_raw", "/front_camera/image_raw"),
        ],
    )

    rear_camera = Node(
        package="v4l2_camera",
        executable="v4l2_camera_node",
        name="rear_camera",
        output="screen",
        parameters=[
            {
                "video_device": "/dev/video1",
                "image_size": [640, 480],
                "camera_frame_id": "rear_camera_link",
            }
        ],
        remappings=[
            ("image_raw", "/rear_camera/image_raw"),
        ],
    )

    aim_camera = Node(
        package="v4l2_camera",
        executable="v4l2_camera_node",
        name="aim_camera",
        output="screen",
        parameters=[
            {
                "video_device": "/dev/video2",
                "image_size": [640, 480],
                "camera_frame_id": "aim_camera_link",
            }
        ],
        remappings=[
            ("image_raw", "/aim_camera/image_raw"),
        ],
    )

    return LaunchDescription(
        [
            front_camera,
            rear_camera,
            aim_camera,
        ]
    )