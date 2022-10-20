cmake_minimum_required(VERSION 3.1)

project(PT1_week05_point)

# use C++11 (globally)
set(CMAKE_CXX_STANDARD 11)          # set standard to C++11
set(CMAKE_CXX_STANDARD_REQUIRED ON) # requires C++11
set(CMAKE_CXX_EXTENSIONS OFF)       # disables extensions such as -std=g++XX

# setting warning compiler flags
add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(point point_main.cpp point.cpp)
