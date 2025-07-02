#include <cstdio>

// preprocessor will paste the contents of the header
#include "square.hpp"

int main() {
  std::printf("---\n");

  // OK
  std::printf("SQR(5) = %d\n", SQR(5));

  // OK- namespaced SQR works without considering namespaces
  std::printf("SQRN(7) = %d\n", SQRN(7));

  // WORKS, BUT NOT OK - 'a' * 'a'(implicit type conversion from char to int)
  std::printf("SQR('a') = %d\n", SQR('a'));

  // BAD - "a" * "a" (invalid operands of types const char[2])
  // std::printf("SQR(\"a\") = %d\n", SQR("a"));

  return 0;
}
