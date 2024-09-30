cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED OFF)

add_library(utils SHARED)

target_sources(utils
  PRIVATE
    utils.cpp
)

set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)
