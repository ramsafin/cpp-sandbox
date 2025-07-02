cmake_minimum_required(VERSION 3.23 FATAL_ERROR)
project(ex_01_low_level LANGUAGES CXX)

message(STATUS "Exercise 01: Low-level C++")

add_exercise_target(
  TARGET_NAME        ${PROJECT_NAME}
  SOURCE_FILES       main.cpp square.hpp
  HEADER_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}
  CXX_STANDARD       23
)

enable_sanitizers(${PROJECT_NAME})
enable_strict_warnings(${PROJECT_NAME})
