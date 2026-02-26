cmake_minimum_required(VERSION 3.15)
project(
	"raylib-cpp-template"
	VERSION 0.1.0
	DESCRIPTION "A C++ project using Raylib"
	LANGUAGES CXX
)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Raylib (vcpkg will provide this)
find_package(raylib CONFIG REQUIRED)

# Delegate the actual building to the src/ folder
add_subdirectory(src)