from setuptools import find_packages
from setuptools import setup

setup(
    name='robot1_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('robot1_interfaces', 'robot1_interfaces.*')),
)
