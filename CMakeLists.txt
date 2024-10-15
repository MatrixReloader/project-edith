cmake_minimum_required(VERSION 3.29)
set(CMAKE_CXX_STANDARD 17)
project(Edith)

set(APPLICATION_LIBRARY EdithLib)
add_subdirectory(${APPLICATION_LIBRARY})
include_directories(${APPLICATION_LIBRARY})

set(SOURCE_FILES main.cpp
                 pch.h)

add_executable(${PROJECT_NAME} WIN32 MACOSX_BUNDLE ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} ${APPLICATION_LIBRARY})
target_precompile_headers(${PROJECT_NAME} PRIVATE pch.h)

add_subdirectory(Tests)