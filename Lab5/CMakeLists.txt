# CMakeList.txt: проект CMake для Lab5; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)
project(Lab5)
# Добавьте источник в исполняемый файл этого проекта.
add_executable (Lab5 main.c)
add_library(Lab5_lib STATIC task1.c)
target_link_libraries(Lab5 Lab5_lib)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
