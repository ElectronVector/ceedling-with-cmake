cmake_minimum_required(VERSION 3.29)
project(ceedling-with-cmake C)

set(CMAKE_C_STANDARD 11)

add_executable(cmake_unit_test src/main.c
        src/ui.c
        src/ui.h
        src/driver/led.c
        src/driver/led.h
        src/state.c
        src/state.h)
