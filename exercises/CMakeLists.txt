set(EXERCISE_DIRS
  01_low_level
  # ...add new folders here
)

foreach(dir IN LISTS EXERCISE_DIRS)
  add_subdirectory(${dir})
endforeach()
