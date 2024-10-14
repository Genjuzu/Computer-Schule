cmake_minimum_required(VERSION 3.29)
project(STRUCT)

set(CMAKE_CXX_STANDARD 26)

add_executable(STRUCT main.cpp
        funktionen.cpp
        funktionen.h)

set(CMAKE_EXE_LINKER_FLAGS "-static")