cmake_minimum_required(VERSION 4.0)
project(MiniRPG)

set(CMAKE_CXX_STANDARD 20)

add_executable(MiniRPG src/main.cpp
        src/Game.h
        src/Game.cpp
        src/Logger.h
        src/Logger.cpp
        src/utilities/Colors.h)
