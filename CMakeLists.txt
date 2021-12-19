cmake_minimum_required(VERSION 3.10)

# set the name of the project
set (target_name StockPortofolio)

# set the project name and version
project(${target_name} VERSION 1.0)

configure_file(Version.h.in Version.h)

# add the executable
add_executable(${target_name} Main.cpp)


target_include_directories(${target_name} PUBLIC
                           "${PROJECT_BINARY_DIR}")
