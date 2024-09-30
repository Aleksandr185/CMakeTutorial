cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED OFF)

project(cmake_tutorial VERSION 1.2.3.0 LANGUAGES CXX)
add_executable(cmake_tutorial main.cpp)

message("version is: ${PROJECT_VERSION}")
message("version major: ${PROJECT_VERSION_MAJOR}")
message("version minor: ${PROJECT_VERSION_MINOR}")
message("version patch: ${PROJECT_VERSION_PATCH}")
message("version tweak: ${PROJECT_VERSION_TWEAK}")

configure_file(version.h.in version.h @ONLY)
target_include_directories(cmake_tutorial PUBLIC "${CMAKE_CURRENT_BINARY_DIR}")

