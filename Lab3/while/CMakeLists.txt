project("Lab3")
add_executable(Lab3_while main.c)
add_library(Lab3_while_lib STATIC findFirstElement.c findFirstNegativeElement.c function.c print.c summ.c summ2.c)
target_link_libraries(Lab3_while Lab3_while_lib)