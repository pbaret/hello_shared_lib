cmake_minimum_required(VERSION 2.8)

project(hello_lib)

add_subdirectory(shared_lib)            # simple example of how to build and link a shared library with CMake

add_subdirectory(exec1)         # simple example of a program linking a custom shared library compiled with CMake
