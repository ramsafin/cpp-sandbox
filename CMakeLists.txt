cmake_minimum_required(VERSION 3.23 FATAL_ERROR)
project(cpp_sandbox LANGUAGES CXX VERSION 1.0.0)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

# === Project Configuration ===
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# === Options ===
include(Options)

# === Flags ===
include(CompilerFlags)

# === Helpers ===
include(Helpers)

# === Core Library ===
add_subdirectory(src)

# === Unit Tests ===
if(ENABLE_TESTING)
  enable_testing()
  add_subdirectory(tests)
endif()

# === Developer Tooling (formatters, linters, etc.) ===
include(Tooling)

# === Coverage ===
include(Coverage)

# === Installation & Export ===
include(install/InstallConfig)

# === Packaging ===
include(CPackConfig)
