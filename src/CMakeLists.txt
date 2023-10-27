cmake_minimum_required(VERSION 3.10)

project(PROJ1 VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Country)

add_executable(main.exe main.cpp)

target_link_libraries(main.exe PUBLIC Country)

target_include_directories(main.exe PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/Country"
                           )
