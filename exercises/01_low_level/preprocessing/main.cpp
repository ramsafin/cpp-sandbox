#include <iostream>

#include "config.hpp"
#include "guard.hpp"
#include "macros.hpp"

int main() {
  std::cout << "CONFIG_VALUE = " << CONFIG_VALUE << "\n";

  // Macro vs constexpr
  std::cout << "SQUARE_MACRO(5)   = " << SQUARE_MACRO(5) << "\n";
  std::cout << "constexprSquare(5) = " << constexprSquare(5) << "\n";  // NOLINT(*-magic-numbers)

  // Conditional compilation
#ifdef ENABLE_FEATURE
  std::cout << "Feature is ENABLED\n";
#else
  std::cout << "Feature is DISABLED\n";
#endif

  printGuardMessage();
  return 0;
}
