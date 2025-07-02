#include <iostream>

#include "cpp_sandbox/library.hpp"

int main() {
  const int LEFT  = 10;
  const int RIGHT = 4;

  std::cout << "Add: " << cpp_sandbox::add(LEFT, RIGHT) << '\n';
  std::cout << "Subtract: " << cpp_sandbox::subtract(LEFT, RIGHT) << '\n';

  return 0;
}
