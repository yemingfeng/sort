cmake_minimum_required(VERSION 3.10)
project(sort)

set(CMAKE_CXX_STANDARD 11)

add_executable(sort
        main.cpp
        array.h
        selection_sort.h
        bubble_sort.h
        insert_sort.h
        merge_sort.h)