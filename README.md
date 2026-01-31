# Raylib CMake Template

A clean starter template for [Raylib](https://www.raylib.com/) projects using **C++**, **CMake**, and **vcpkg**.

## Features
- **Modern CMake** setup with `CMakePresets.json`.
- **vcpkg** integration for easy dependency management.
- **Auto-discovery** of source files in `src/`.
- **Include folder** pre-configured for header files.

## Prerequisites
1. **C++ Compiler** (Visual Studio MSVC, GCC, or Clang).
2. **CMake** (3.15 or newer).
3. **vcpkg** installed and integrated.

## Setup

### 1. Set Environment Variable
Ensure you have an environment variable named `VCPKG_ROOT` pointing to your vcpkg installation folder.
- *Example:* `D:/Dev/vcpkg`

### 2. Create a New Project
Click the green **"Use this template"** button on GitHub to create a new repository from this starter code.

### 3. Build & Run
**Using Visual Studio / VS Code (Recommended):**
Open the folder. CMake should automatically configure using the presets. Select the `x64-debug` preset and build.

**Using Command Line:**
```bash
cmake --preset x64-debug
cmake --build --preset x64-debug
./out/build/x64-debug/RaylibProject
```
