from setuptools import find_packages, setup

package_name = 'infrasense_stop'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='everett',
    maintainer_email='ehrichards9@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'ipi_receiver = infrasense_stop.ipi_receiver:main',
            'stop_controller = infrasense_stop.stop_controller:main',
            'stop_monitor = infrasense_stop.stop_monitor:main',
        ],
    },
)
