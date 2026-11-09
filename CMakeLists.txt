cmake_minimum_required(VERSION 3.25)
project(trash-cli)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Using new C++ 26 features for fun
set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# This is so zed can actually use the correct C++ version
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(trash-cli src/main.cc)

# external libraries we need to link to
add_library(CLI11 INTERFACE)

target_include_directories(CLI11 SYSTEM INTERFACE
  ${CMAKE_CURRENT_SOURCE_DIR}/external
)

# Adding in the library headers
target_include_directories(trash-cli PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Link em up
target_link_libraries(trash-cli PRIVATE CLI11)
