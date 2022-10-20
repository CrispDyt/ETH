cmake_minimum_required(VERSION 3.1)

project(PT1_week05_SArrayT)

# C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON) # requires C++11
set(CMAKE_CXX_EXTENSIONS OFF)       # disables extensions such as -std=g++XX

# setting warning compiler flags
  add_compile_options(-Wall -Wextra -Wpedantic)

# add options
option(VERBOSE "Show what's happening" ON)
if ( VERBOSE )
  add_definitions(-DVERBOSE)
endif()
option(MOVE "Enable move ctor & assignment" ON)
if ( MOVE )
  add_definitions(-DMOVE)
endif()

add_executable(sarray sarray_main.cpp)
