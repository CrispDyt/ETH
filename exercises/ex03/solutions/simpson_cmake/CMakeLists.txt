# Require 3.1 for CMAKE_CXX_STANDARD property
cmake_minimum_required(VERSION 3.1)

# if you want a different compiler than the auto-detected one
# set(CMAKE_CXX_COMPILER "g++-7")
# set(CMAKE_CXX_COMPILER "clang++")

project(simpson_cmake)

# use C++11
set(CMAKE_CXX_STANDARD 11)

# setting compiler flags
add_compile_options(-Wall -Wextra -Wpedantic)

# this tells cmake to look for a CMakeLists.txt file in the folder integrator
# (which is where the add_library command is defined)
add_subdirectory(integrator)

# all that remains is to define our executable and the library to link against
add_executable(main main.cpp)
target_link_libraries(main simpson_lib)

