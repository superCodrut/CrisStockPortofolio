cmake_minimum_required(VERSION 3.10)

# set the name of the project
set (target_name StockPortofolio)

# set the project name and version
project(${target_name} VERSION 1.0)


# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(Version.h.in Version.h)

# add the executable
add_executable(${target_name} Main.cpp)


target_include_directories(${target_name} PUBLIC
                           "${PROJECT_BINARY_DIR}")
