cmake_minimum_required (VERSION 3.8)

add_executable(Lab1Task8 Task7_main.c)

add_library(Task8_lib STATIC Task7_func.c)

target_link_libraries (Lab1Task8 Task8_lib)