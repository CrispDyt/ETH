cmake_minimum_required(VERSION 3.1)

project(PT1_week04_IDGen)

add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(IDGen main.cpp IDGenerator.cpp)
