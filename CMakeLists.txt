cmake_minimum_required(VERSION 3.10)
project(DemoComplex)

set(CMAKE_CXX_STANDARD 11)

add_executable(DemoComplex main.cpp Complex.cpp Complex.h)
add_executable(DemoComplexTest tests.cpp Complex.cpp Complex.h)