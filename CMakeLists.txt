cmake_minimum_required (VERSION 3.16)
project (course C)

set (CMAKE_C_STANDARD 11)

add_executable(course main.c
        libs/base/base.c
        libs/base/base.h)

add_subdirectory (Libs)
target_link_libraries (course data_structures)
target_link_libraries(course algorithms)