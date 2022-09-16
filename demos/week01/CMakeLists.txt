cmake_minimum_required(VERSION 3.1)
 
project(PT1_week01)

# compile the programs from source
add_executable(loop.exe loop.cpp)
add_executable(swap.exe swapfixed.cpp)
# add_executable(swap0.exe swap.cpp) # won t work because of swap3 ;-)
add_executable(prepost.exe prepost.cpp)
add_executable(hello.exe hello.cpp)
