cmake_minimum_required(VERSION 3.22)
project(calculator)

set(CMAKE_CXX_STANDARD 14)

find_package(raylib 4.0.0 QUIET)

add_executable(calculator main.cpp Button.h Button.cpp Calculator.cpp Calculator.h NumberButton.cpp NumberButton.h OperatorButton.cpp OperatorButton.h EqualButton.cpp EqualButton.h)
target_link_libraries(${PROJECT_NAME} raylib)