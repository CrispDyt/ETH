cmake_minimum_required(VERSION 3.1)

project(PT1_week04)

# use C++11 (globally)
set(CMAKE_CXX_STANDARD 11)          # set standard to C++11
set(CMAKE_CXX_STANDARD_REQUIRED ON) # requires C++11
set(CMAKE_CXX_EXTENSIONS OFF)       # disables extensions such as -std=g++XX

# setting warning compiler flags
add_compile_options(-Wall)

add_executable(point point_main.cpp point.cpp)
add_executable(funcO_lambda funcO_lambda.cpp)
add_executable(imcounting imcounting.cpp)
add_executable(ctor_inilist_order ctor_inilist_order.cpp)
