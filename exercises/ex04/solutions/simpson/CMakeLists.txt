# Require 3.1 for CMAKE_CXX_STANDARD property
cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 11)

project(simpson)

add_executable(simpson main.cpp)
