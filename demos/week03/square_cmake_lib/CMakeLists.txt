# require minimum version of CMake
cmake_minimum_required(VERSION 3.1)

# set name of project
project(Square)

# option to build STATIC or SHARED library
option(BUILD_SQUARE_SHARED "Build the square library shared." OFF)
if(BUILD_SQUARE_SHARED)
  set(SQUARE_LIBRARY_TYPE SHARED)
else()
  set(SQUARE_LIBRARY_TYPE STATIC)
endif()

# setting warning compiler flags
add_compile_options(-Wall -Wextra -Wpedantic)

# add a subdirectory to the build (here lib contains the
# CMakeLists.txt with the square library)
add_subdirectory(lib)

# add executable to the project using the specified source files
add_executable(square main.cpp)

# specify that we need the square library (squareLib)
target_link_libraries(square squareLib)

# specify install rules
install(TARGETS square DESTINATION bin)
