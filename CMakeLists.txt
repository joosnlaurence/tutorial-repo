cmake_minimum_required(VERSION 3.0.0)
project(this_best_test_yarr VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(this_best_test_yarr base_main.cpp A.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
