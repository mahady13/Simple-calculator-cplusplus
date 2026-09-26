cmake_minimum_required(VERSION 3.10)

project(SimpleCalculator 
        VERSION 1.0 
        DESCRIPTION "A simple C++ CLI calculator"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CalculatorApp calculator.cpp)
