cmake_minimum_required(VERSION 2.8.11)
project(OpenGraph)

# The version number.
set (OpenGraph_VERSION_MAJOR 0)
set (OpenGraph_VERSION_MINOR 1)

# Where is everything
set (PROJECT_SOURCE_DIR ./src)
set (PROJECT_BINARY_DIR ./bin)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/version.h.in"
  "${PROJECT_SOURCE_DIR}/version.h"
  )

# add the binary tree to the search path for include files
# so that we will find version.h
include_directories("${PROJECT_BINARY_DIR}")

add_executable(OpenGraph ${PROJECT_SOURCE_DIR}/main.cpp)
