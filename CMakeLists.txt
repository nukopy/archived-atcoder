cmake_minimum_required(VERSION 3.10)
project(atcoder)

set(CMAKE_CXX_STANDARD 14)

add_executable(atcoder main.cpp)

# subdirectory
#add_subdirectory(nikkei_procon_2019)
add_subdirectory(ABC_117)
add_subdirectory(library)
