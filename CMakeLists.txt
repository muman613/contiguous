cmake_minimum_required(VERSION 3.10)
project(contiguous)

set(CMAKE_CXX_STANDARD 14)

include_directories(library)

add_subdirectory(library)

add_executable(contiguous main.cpp test/basic_tests/basic_tests.cpp)

target_link_libraries(contiguous library)

