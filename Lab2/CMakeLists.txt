# CMakeList.txt: проект CMake для Lab2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Lab2 main.c)
add_library(Lab2_lib STATIC func.c isInArea.c)
target_link_libraries (Lab2 Lab2_lib)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
