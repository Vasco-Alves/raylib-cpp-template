cmake_minimum_required(VERSION 3.15)
project(RaylibProject CXX DESCRIPTION "A C++ project using Raylib")

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Raylib (vcpkg will provide this)
find_package(raylib CONFIG REQUIRED)

# -----------------------------------------------------------------------------
# 1. Automatically find all .cpp files in the src/ folder (and subfolders)
# -----------------------------------------------------------------------------
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add the executable using the detected source files
add_executable(${PROJECT_NAME} ${SOURCES})

# -----------------------------------------------------------------------------
# 2. Add the "include/" folder to the compiler's search path
#    This allows you to write #include "myheader.h" instead of "../include/myheader.h"
# -----------------------------------------------------------------------------
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Link Raylib to your app
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)