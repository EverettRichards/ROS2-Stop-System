from setuptools import find_packages
from setuptools import setup

setup(
    name='dbw_ford_msgs',
    version='2.1.15',
    packages=find_packages(
        include=('dbw_ford_msgs', 'dbw_ford_msgs.*')),
)
