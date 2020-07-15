cmake_minimum_required(VERSION 2.6)

project(sampletest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Threads REQUIRED)
add_executable(sampletest main.cpp sample.hpp sample.cpp sampletest.cpp)

target_link_libraries(sampletest gtest)
target_link_libraries(sampletest gmock)
target_link_libraries(sampletest pthread)
