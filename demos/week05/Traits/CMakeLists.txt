cmake_minimum_required(VERSION 3.1)

project(PT1_week05_traits)

# C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON) # requires C++11
set(CMAKE_CXX_EXTENSIONS OFF)       # disables extensions such as -std=g++XX

# setting warning compiler flags
add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(min min_main.cpp)
add_executable(average average_main.cpp)
