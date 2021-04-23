cmake_minimum_required(VERSION 3.10)

project(CPP_PROJ)

## C++ settings
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Some util information
# ---------------------------------------------------------
message("\nBuilding the 'test' folder}")

find_package(GTest REQUIRED)
include(GoogleTest)
include_directories(${GTEST_INCLUDE_DIRS})

set(TEST_LIBS ${GTEST_LIBRARIES} myClass)

add_custom_target(tests)

add_executable(TestMain testMyClass.cpp testMain.cpp)
target_link_libraries(TestMain ${TEST_LIBS} pthread)
add_test(NAME TestMain COMMAND TestMain)
set_tests_properties(TestMain PROPERTIES ENVIRONMENT "${CMAKE_CTEST_ENV}")
add_dependencies(tests TestMain)
include_directories(${PROJECT_SOURCE_DIR}/src)

gtest_add_tests(TARGET TestMain)