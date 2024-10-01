cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED OFF)

set(BINARY_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${BINARY_DIR}/lib")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${BINARY_DIR}/lib")

project(cmake_tutorial VERSION 1.2.3.0 LANGUAGES CXX)
add_executable(cmake_tutorial)

target_sources(${PROJECT_NAME}
  PRIVATE 
    main.cpp
)

option(OPTION_ONE "Test CMake 'option' function. (ON or OFF)" OFF) # OFF by default

if(OPTION_ONE)
  target_compile_definitions(${PROJECT_NAME} PUBLIC OPTION_ONE_DEF)
endif()

message("version is: ${PROJECT_VERSION}")
message("version major: ${PROJECT_VERSION_MAJOR}")
message("version minor: ${PROJECT_VERSION_MINOR}")
message("version patch: ${PROJECT_VERSION_PATCH}")
message("version tweak: ${PROJECT_VERSION_TWEAK}")

configure_file(version.h.in version.h @ONLY)
target_include_directories(cmake_tutorial PUBLIC "${CMAKE_CURRENT_BINARY_DIR}")

add_subdirectory(library_utils)
target_link_libraries(cmake_tutorial utils)
