set(CMAKE_TOOLCHAIN_FILE ~/embedded/Arduino-CMake-Toolchain/Arduino-toolchain.cmake)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

cmake_minimum_required(VERSION 3.0.0)

project(arduino_base CXX)

add_executable(main main.cc)

target_link_arduino_libraries(main PRIVATE core)
target_enable_arduino_upload(main)
