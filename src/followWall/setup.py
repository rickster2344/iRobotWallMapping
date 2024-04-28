from setuptools import find_packages, setup

package_name = 'followWall'

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
    maintainer='controlslab',
    maintainer_email='rickster2344@gmail.com',
    description='Wall following script for the create3 roomba',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                #defines the teleop entry point in the followWall package, using the robot1Teleop.py script
                'robot1_teleop = followWall.robot1Teleop:main'
        ],
    },
)