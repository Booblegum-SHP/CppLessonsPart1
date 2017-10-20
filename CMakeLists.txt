cmake_minimum_required(VERSION 3.8)
project(CppTest)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)


add_executable(1_hello_world block01/examples/1_hello_world.cpp)
add_executable(2_variables block01/examples/2_variables.cpp)
add_executable(3_input_output block01/examples/3_input_output.cpp)
add_executable(4_operations block01/examples/4_operations.cpp)
add_executable(data_types block01/materials/data_types.cpp)
add_executable(1_logic_bool block02/examples/1_logic_bool.cpp)
add_executable(2_logic_compound block02/examples/2_logic_compound.cpp)