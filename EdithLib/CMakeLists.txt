cmake_minimum_required(VERSION 3.29)
project(EdithLib)

set(SOURCE_FILES
        pch.h)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
target_precompile_headers(${PROJECT_NAME} PRIVATE pch.h)
