#pragma once

#define SQUARE_MACRO(x) ((x) * (x))

// A “safer” constexpr alternative:
constexpr int constexprSquare(int x) {  // NOLINT(readability-identifier-length)
  return x * x;
}

// A macro with side-effects
#define CALL_WITH_INCREMENT(fn, x) fn((x)++)  // NOLINT(cppcoreguidelines-macro-usage)

// Pros of macros:
// - text substitution
// - no runtime overhead
//
// Cons of macros:
// - double evalution
// - no scope
// - hard to debug
// - no type safety
