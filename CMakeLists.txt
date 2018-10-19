cmake_minimum_required(VERSION 3.12)
project(lab5)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab5 main.cpp division_operation.hpp
        addition_operation.hpp subtraction_operation.hpp multiplication_operation.hpp
        abstract_operation.hpp operation.hpp rpn_calculator.hpp rpn_calculator.cpp)