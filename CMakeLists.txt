cmake_minimum_required(VERSION 3.15)
project(design_pattern)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(simple_factory)

# test
enable_testing()
add_subdirectory(test)