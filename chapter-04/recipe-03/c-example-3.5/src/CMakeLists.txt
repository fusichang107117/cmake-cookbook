
# example library
add_library(sum_integers sum_integers.c)

# main code
add_executable(sum_up main.c)
target_link_libraries(sum_up sum_integers)
