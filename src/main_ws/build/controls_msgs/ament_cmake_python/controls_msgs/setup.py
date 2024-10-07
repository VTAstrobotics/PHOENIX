from setuptools import find_packages
from setuptools import setup

setup(
    name='controls_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('controls_msgs', 'controls_msgs.*')),
)
