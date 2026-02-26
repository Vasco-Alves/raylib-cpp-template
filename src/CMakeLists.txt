# Add your executable and list your source files here
add_executable(${PROJECT_NAME} 
    main.cpp
)

# Add the "include/" folder to the compiler's search path
# ${CMAKE_SOURCE_DIR} points to the root of your project
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Link Raylib to your app
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)