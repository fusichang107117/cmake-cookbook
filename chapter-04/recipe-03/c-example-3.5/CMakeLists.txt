# set minimum cmake version
cmake_minimum_required(VERSION 3.9 FATAL_ERROR)

# project name and language
project(recipe-03)

add_subdirectory(src)

enable_testing()
add_subdirectory(test)

set(DOXYGEN_GENERATE_HTML YES)
set(DOXYGEN_EXTRACT_ALL YES)
#set(DOXYGEN_BUILTIN_STL_SUPPORT NO)

find_package(Doxygen REQUIRED)

doxygen_add_docs(doxygen_docs ${PROJECT_SOURCE_DIR}/src)
