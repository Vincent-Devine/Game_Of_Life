cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_BUILD_TYPE Debug)

file(GLOB SOURCES "Sources/*")
set(ProjectName "GameOfLife")

project(${ProjectName} VERSION 0.1)

# Adding Raylib
include(FetchContent)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # don't build the supplied example games
FetchContent_Declare(raylib GIT_REPOSITORY https://github.com/raysan5/raylib.git GIT_TAG master)
FetchContent_MakeAvailable(raylib)

#Create Exe
add_executable(${ProjectName})
target_sources(${ProjectName} PRIVATE ${SOURCES})
target_include_directories(${ProjectName} PUBLIC "${PROJECT_SOURCE_DIR}/Headers/")
target_link_libraries(${ProjectName} PRIVATE raylib)