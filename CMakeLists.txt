cmake_minimum_required(VERSION 3.10)

project(CPP_PROJ)

## C++ settings
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Some util information
# ---------------------------------------------------------
message("\nBuilding Makefile for ${PROJECT_NAME}")
message("------------------------------")
message("-- Source Dir: ${CMAKE_CURRENT_SOURCE_DIR}")
message("-- Binary Dir: ${CMAKE_CURRENT_BINARY_DIR}")
# ---------------------------------------------------------

# Some util flags
# CMAKE_CXX_FLAGS "-pthread -fopenmp --coverage -g -gdwarf-2"
#     "-std=c++17 -Wall -o3 -og -ofast -frename-registers"
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-og")

enable_testing()
add_subdirectory(src)
add_subdirectory(test)