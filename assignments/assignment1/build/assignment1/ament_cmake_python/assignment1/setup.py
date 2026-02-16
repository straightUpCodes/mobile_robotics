from setuptools import find_packages
from setuptools import setup

setup(
    name='assignment1',
    version='0.0.0',
    packages=find_packages(
        include=('assignment1', 'assignment1.*')),
)
