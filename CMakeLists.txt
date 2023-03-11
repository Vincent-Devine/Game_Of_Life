cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_BUILD_TYPE Debug)

FILE(GLOB SOURCES "Sources/*")
set(ExeName "GameOfLife")

project(${ExeName} VERSION 0.1)

#Create Exe
add_executable(${ExeName} ${SOURCES})
target_include_directories(${ExeName} PUBLIC "${PROJECT_SOURCE_DIR}/Headers/")