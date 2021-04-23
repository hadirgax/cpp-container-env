cmake_minimum_required(VERSION 3.10)

project(CPP_PROJ)

## C++ settings
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Some util information
# ---------------------------------------------------------
message("\nBuilding the 'src' folder}")

add_executable(main main.cpp)
add_library(myClass STATIC myClass.cpp)
target_link_libraries(main myClass)