cmake_minimum_required(VERSION 3.29)
project(Tests)
set(CMAKE_CXX_STANDARD 17)

set(TEST_FILES
    gtest_main.cpp
    EmptyTest.cpp
)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.11.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Tests_run ${TEST_FILES})
target_link_libraries(Tests_run ${APPLICATION_LIBRARY})
target_link_libraries(Tests_run gtest)

target_precompile_headers(Tests_run PRIVATE ../${APPLICATION_LIBRARY}/pch.h)