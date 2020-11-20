cmake_minimum_required(VERSION 3.10)

project(sort)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES main.cpp src)

add_executable(${PROJECT_NAME} ${SOURCES})