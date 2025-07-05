#pragma once

// a free (non-inline) function
int sumFree(int a, int b);  // NOLINT(readability-identifier-length)

// a simple struct with an inline member
struct MyStruct {
  int               value;
  [[nodiscard]] int increment() const;  // defined in funcs.cpp
};

// a constexpr/template function
template <int A, int B>
constexpr int mult() {
  return A * B;
}
