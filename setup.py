from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext

ext_modules = [Extension("cython_lib", ["main.pyx", "lib_c/lib.cpp"], language='c++',)]

setup(cmdclass = {'build_ext': build_ext}, ext_modules = ext_modules)
