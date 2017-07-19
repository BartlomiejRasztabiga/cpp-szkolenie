cmake_minimum_required(VERSION 3.8)
project(cpp_szkolenie)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Role.cpp Role.h User.cpp User.h)
add_executable(cpp_szkolenie ${SOURCE_FILES})