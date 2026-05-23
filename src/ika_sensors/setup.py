from setuptools import find_packages, setup
import os
from glob import glob

package_name = "ika_sensors"

setup(
    name=package_name,
    version="0.0.1",
    packages=find_packages(exclude=["test"]),
    data_files=[
        (
            "share/ament_index/resource_index/packages",
            ["resource/" + package_name],
        ),
        (
            "share/" + package_name,
            ["package.xml"],
        ),
        (
            os.path.join("share", package_name, "launch"),
            glob("launch/*.launch.py"),
        ),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="sukru",
    maintainer_email="sukru.birim@gmail.com",
    description="Sensor publisher package for TEKNOFEST autonomous ground vehicle.",
    license="MIT",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "temp_humidity_node = ika_sensors.temp_humidity_node:main",
            "pressure_altitude_node = ika_sensors.pressure_altitude_node:main",
            "laser_range_node = ika_sensors.laser_range_node:main",
        ],
    },
)