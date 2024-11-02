cmake_minimum_required(VERSION 3.14)

project(LeetCodeTest)
enable_testing()

# add_subdirectory(src)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(MSVC)
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} /W3 /MTd")
endif()

# Download and add GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.2  # Replace with the desired tag
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Fetch the content and make it available
FetchContent_MakeAvailable(googletest)

set(SOURCES
    src/88_merge_sorted_array_test.cc
    main.cc
)

file(GLOB SOURCES src/*_test.cc)

# Sample test file
add_executable(LeetCodeTest ${SOURCES} main.cc)

target_link_libraries(LeetCodeTest PRIVATE LeetCodeLib gtest_main)
target_include_directories(LeetCodeTest PRIVATE ${PROJECT_SOURCE_DIR}/include)

# Add the test to CMake's test suite
add_test(NAME SampleTest COMMAND SampleTest)
