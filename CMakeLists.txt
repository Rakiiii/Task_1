cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c Include_and_constants.h)
add_executable(untitled ${SOURCE_FILES})