from setuptools import find_packages
from setuptools import setup

setup(
    name='ika_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('ika_msgs', 'ika_msgs.*')),
)
