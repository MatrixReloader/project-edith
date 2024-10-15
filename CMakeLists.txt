cmake_minimum_required(VERSION 3.29)
project(Edith)
set(CMAKE_CXX_STANDARD 17)

# Application Library
set(APPLICATION_LIBRARY EdithLib)
add_subdirectory(${APPLICATION_LIBRARY})
include_directories(${APPLICATION_LIBRARY})

# Source Files
set(SOURCE_FILES main.cpp pch.h)

# Create the executable (console application)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Link the application library
target_link_libraries(${PROJECT_NAME} ${APPLICATION_LIBRARY})

# Precompiled header
target_precompile_headers(${PROJECT_NAME} PRIVATE pch.h)

# Add Tests subdirectory
add_subdirectory(Tests)