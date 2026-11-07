cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 20)

project(TrashCLI)


add_executable(trash-cli "src/main.cc" ${USER_FILES})
