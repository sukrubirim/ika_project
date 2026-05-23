from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'ika_autonomi'

setup(
    name=package_name,
    version='0.0.0',
    # find_packages() artık iç klasörü (ika_autonomi) otomatik bulacak
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sukru',
    maintainer_email='sukru.birim@gmail.com',
    description='Otonom sistemler icin motor ve gorev kontrol paketi',
    license='Apache-2.0',
    entry_points={
        'console_scripts': [
            # YOL ARTIK: paket_adi.dosya_adi:main
            'mission_manager = ika_autonomi.mission_manager:main',
            'motor_controller = ika_autonomi.motor_controller:main',
        ],
    },
)