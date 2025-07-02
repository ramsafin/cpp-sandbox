#pragma once

// Macros: square of a number
// Issues: not type-safe - we can pass anything into the macros
#define SQR(x) ((x) * (x))

namespace exercise {

// Namespaced macros
// Issues: namespaces do not work on macros
#define SQRN(x) ((x) * (x))

}  // namespace exercise
