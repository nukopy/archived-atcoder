cmake_minimum_required(VERSION 3.1)
project(ABC_117)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -std=c++14)

add_executable(ABC117_A ABC117_A.cpp)
add_executable(ABC117_B ABC117_B.cpp)
add_executable(ABC117_C ABC117_C.cpp)
add_executable(ABC117_D ABC117_D.cpp)
add_executable(test_binary test_binary.cpp)
