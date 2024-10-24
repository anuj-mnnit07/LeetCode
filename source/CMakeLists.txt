cmake_minimum_required(VERSION 3.14)

project(LeetCodeLib VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB SOURCES "src/*.cc")
file(GLOB HEADERS "include/*.h*")

# This is building this library as shared library in windows
# if(MSVC)
#     set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
#     set(BUILD_SHARED_LIBS TRUE)
# endif()

add_library(LeetCodeLib STATIC
    ${SOURCES}
    ${HEADERS}
)

target_include_directories(LeetCodeLib PUBLIC
    include
)

set_target_properties(LeetCodeLib PROPERTIES
    VERSION ${PROJECT_VERSION}
    PUBLIC_HEADER "${PROJECT_SOURCE_DIR}/include/88_merge_sorted_array.hpp"
)
