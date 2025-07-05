#include "funcs.hpp"

// non-inline free function lives in its own translation unit
int sumFree(int a, int b) {  // NOLINT(readability-identifier-length)
  return a + b;
}

// member defined out-of-line
int MyStruct::increment() const {
  return value + 1;
}
