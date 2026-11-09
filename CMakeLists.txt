cmake_minimum_required(VERSION 3.15)
project(trash-cli)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Using new C++ 26 features for fun
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 26)
# This is so zed can actually use the correct C++ version
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


add_executable(trash-cli src/main.cc)
