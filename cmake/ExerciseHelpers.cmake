# Helper function to define a C++ exercise target with an accompanying "run" custom target.
# Usage:
#   add_exercise_target(
#     TARGET_NAME         <unique_exercise_target_name>
#     SOURCE_FILES        <file1.cpp> [<file2.cpp> ...]
#     HEADER_DIRECTORIES  <dir1> [<dir2> ...]         # optional
#     LINKED_LIBRARIES    <lib1> [<lib2> ...]         # optional
#     CXX_STANDARD        <cxx_standard>              # e.g. 23 or 20 (mandatory)
#   )
function(add_exercise_target)
  # Parse arguments
  cmake_parse_arguments(
    CPT                                                 # Prefix for parsed variables
    ""                                                  # No boolean options
    "TARGET_NAME;CXX_STANDARD"                          # Single-value args
    "SOURCE_FILES;HEADER_DIRECTORIES;LINKED_LIBRARIES"  # Multi-value args
    ${ARGN}
  )

  # Validate required arguments
  if(NOT CPT_TARGET_NAME)
    message(FATAL_ERROR "add_exercise_target(): \"TARGET_NAME\" is required.")
  endif()
  if(NOT CPT_SOURCE_FILES)
    message(FATAL_ERROR "add_exercise_target(TARGET_NAME ${CPT_TARGET_NAME}): at least one SOURCE_FILES entry is required.")
  endif()
  if(NOT CPT_CXX_STANDARD)
    message(FATAL_ERROR "add_exercise_target(TARGET_NAME ${CPT_TARGET_NAME}): \"CXX_STANDARD\" is required (e.g. 20, 23).")
  endif()

  # 1) Create the executable target
  add_executable(${CPT_TARGET_NAME} ${CPT_SOURCE_FILES})

  message(STATUS "Created executable: ${CPT_TARGET_NAME}")

  # 2) Add include directories if provided
  if(CPT_HEADER_DIRECTORIES)
    target_include_directories(${CPT_TARGET_NAME}
      PRIVATE ${CPT_HEADER_DIRECTORIES}
    )
  endif()

  # 3) Link additional libraries if provided
  if(CPT_LINKED_LIBRARIES)
    target_link_libraries(${CPT_TARGET_NAME}
      PRIVATE ${CPT_LINKED_LIBRARIES}
    )
  endif()

  # 4) Enforce the requested C++ standard
  target_compile_features(${CPT_TARGET_NAME}
    PUBLIC cxx_std_${CPT_CXX_STANDARD}
  )

  # 5) Define a custom "run_<target>" target to build and run the executable
  add_custom_target(run_${CPT_TARGET_NAME}
    COMMAND $<TARGET_FILE:${CPT_TARGET_NAME}>
    DEPENDS ${CPT_TARGET_NAME}
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Running ${CPT_TARGET_NAME}"
    VERBATIM
  )

  message(STATUS "Created run target for executable: run_${CPT_TARGET_NAME}")
endfunction()
