#include <iostream>

#include "funcs.hpp"

int main() {
  int x = 5;  // NOLINT
  int y = 7;  // NOLINT

  std::cout << "sum_free(" << x << ", " << y << ") = " << sumFree(x, y) << "\n";

  MyStruct s{10};  // NOLINT
  std::cout << "s.increment() → " << s.increment() << "\n";

  // template instantiation
  std::cout << "mult<5,7> = " << mult<5, 7>() << "\n";  // NOLINT

  return 0;
}
