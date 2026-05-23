from setuptools import setup

package_name = 'ika_ui_bridge'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    install_requires=['rclpy', 'websockets', 'aiohttp'],
    entry_points={
        'console_scripts': [
            'ui_bridge_node = ika_ui_bridge.ui_bridge_node:main',
        ],
    },
)
