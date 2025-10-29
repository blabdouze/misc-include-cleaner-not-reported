cmake_minimum_required(VERSION 3.20)

project(misc-include LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(
        misc-include
        # Entry point
        main.cpp
)
target_include_directories(misc-include PUBLIC ${CMAKE_SOURCE_DIR})
