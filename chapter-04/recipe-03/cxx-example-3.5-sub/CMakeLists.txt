# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(recipe-03)

add_subdirectory(src)

enable_testing()
add_subdirectory(test)
