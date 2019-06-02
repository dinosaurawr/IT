cmake_minimum_required (VERSION 3.8)

add_executable(Task8 Task7_main.c)

add_library(Task8_lib STATIC Task7_func.c)

target_link_libraries (Task8 Task8_lib)