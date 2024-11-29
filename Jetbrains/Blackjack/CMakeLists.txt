cmake_minimum_required(VERSION 3.29)
project(Blackjack)

set(CMAKE_CXX_STANDARD 26)

add_executable(Blackjack main.cpp
        functions.cpp
        functions.h
        neuefunktionen.cpp
        neuefunktionen.h
)
