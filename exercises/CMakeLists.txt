set(EXERCISE_DIRS
  01_low_level
  # ...add new folders here
)

# add_exercise_target() helper
include(ExerciseHelpers)

foreach(dir IN LISTS EXERCISE_DIRS)
  add_subdirectory(${dir})
endforeach()
