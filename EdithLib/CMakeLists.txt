cmake_minimum_required(VERSION 3.29)
project(EdithLib)
set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES
        pch.h
        dummy.cpp
        dummy.h)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME})
target_precompile_headers(${PROJECT_NAME} PRIVATE pch.h)
