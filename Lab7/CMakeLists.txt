# CMakeList.txt: проект CMake для Lab7; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)
add_executable(Lab7 main.c)
add_library(Lab7_lib STATIC task1.c task2.c task3.c task4.c task5.c task6.c task7.c)
target_link_libraries(Lab7 Lab7_lib)
# Добавьте источник в исполняемый файл этого проекта.

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
