cmake_minimum_required(VERSION 3.31)
project(basic_cli_tools)

set(CMAKE_CXX_STANDARD 20)

add_executable(basic_cli_tools main.cpp
        header.h
        tools/subnet.cpp
        tools/binary.cpp
        tools/morse.cpp
        tools/number.cpp)
