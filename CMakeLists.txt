cmake_minimum_required(VERSION 3.8)
project(CppTest)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)

add_executable(hello_world lesson01/examples/1_hello_world.cpp)
add_executable(2_variables lesson01/examples/2_variables.cpp)
add_executable(input_output lesson01/examples/3_input_output.cpp)
add_executable(4_operations lesson01/examples/4_operations.cpp)
add_executable(1_logic lesson02/examples/1_logic_bool.cpp)
add_executable(data_types lesson01/materials/data_types.cpp)