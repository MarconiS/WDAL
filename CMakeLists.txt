cmake_minimum_required(VERSION 2.8.11)
project(WDAL CXX C)

add_subdirectory(src)

enable_testing()
add_subdirectory(vendor/gtest-1.7.0)
add_subdirectory(test)
