project("Lab3")
add_executable(Lab3_for main.c)
add_library(Lab3_for_lib STATIC findFirstElement.c findFirstNegativeElement.c function.c print.c summ.c summ2.c)
target_link_libraries(Lab3_for Lab3_for_lib)