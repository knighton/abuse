from distutils.core import setup, Extension
from setuptools import find_packages
import os


SRC_ROOT = 'phraser/'


# 1. Base flags.
# 2. Max out warnings.
# 3. Disable some warnings.
# 4. Disable more warnings for LAPOS.
COMPILE_FLAGS = ("""
    -std=c++11
    -fcolor-diagnostics
    -O3
    -ferror-limit=5
    -I%s

    -Wpedantic
    -Wall
    -Weverything
    -Wextra
    -Werror

    -Wno-c++98-compat-pedantic
    -Wno-covered-switch-default
    -Wno-exit-time-destructors
    -Wno-global-constructors
    -Wno-padded
    -Wno-weak-vtables

    -Wno-shorten-64-to-32
    -Wno-sign-conversion
    -Wno-old-style-cast
    -Wno-sign-compare
    -Wno-float-equal
    -Wno-unused-variable
    -Wno-unused-parameter
    -Wno-unused-function
""" % SRC_ROOT).split()


# C++ source naming convention:
# * Main files end with .cpp
# * Everything else ends with .cc
def find_cc_files(root_dir):
    ff = []
    for root, dirs, files in os.walk(root_dir):
        for name in files:
            if name.endswith('.cc'):
                f = os.path.join(root, name)
                ff.append(f)
    return ff


# Use clang.
os.environ['CC'] = 'clang'
os.environ['CXX'] = 'clang++'


phraser = Extension(
    name='phraser/ext/phraser',
    sources=find_cc_files(SRC_ROOT) + ['phraser/cc/pyext/phraser.cpp'],
    extra_compile_args=COMPILE_FLAGS,
    include_dirs=[SRC_ROOT],
    libraries=['boost_regex'],
    library_dirs=['/usr/local/lib/'],
)


setup(
    name='phraser',
    version='0.0.3',
    author='James Knighton',
    author_email='iamknighton@gmail.com',
    description='Detects phrases in English text',
    license='MIT',
    packages=find_packages(),
    ext_modules=[phraser],
)
