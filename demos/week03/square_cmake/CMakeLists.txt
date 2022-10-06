# require minimum version of CMake
cmake_minimum_required(VERSION 3.1)

# set name of project
project(Square)

# setting warning compiler flags
add_compile_options(-Wall -Wextra -Wpedantic)

# add executable to the project using the specified source files
add_executable(square main.cpp square.cpp)

# specify install rules
install(TARGETS square DESTINATION bin)
