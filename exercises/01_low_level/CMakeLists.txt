cmake_minimum_required(VERSION 3.23 FATAL_ERROR)
project(ex_01_low_level LANGUAGES CXX)

message(STATUS "Exercise 01: Low-level C++")

add_exercise_target(
  TARGET_NAME        ${PROJECT_NAME}_preprocessing
  SOURCE_FILES       preprocessing/main.cpp
  HEADER_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/preprocessing
  CXX_STANDARD       23
)

add_exercise_target(
  TARGET_NAME        ${PROJECT_NAME}_compilation_asm
  SOURCE_FILES       compilation_to_asm/main.cpp compilation_to_asm/funcs.cpp
  HEADER_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/compilation_to_asm
  CXX_STANDARD       23
)

add_exercise_target(
  TARGET_NAME        ${PROJECT_NAME}_asm_to_object
  SOURCE_FILES       asm_to_object/main.cpp asm_to_object/funcs.cpp
  HEADER_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/asm_to_object
  CXX_STANDARD       23
)
