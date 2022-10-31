cmake_minimum_required(VERSION 3.14)
project(veem)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src)
add_subdirectory(tests)