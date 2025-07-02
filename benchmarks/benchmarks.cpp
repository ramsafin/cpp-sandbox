#include <benchmark/benchmark.h>

#include "cpp_sandbox/library.hpp"

static void bmAdd(benchmark::State &state) {
  for (auto _ : state) {  // NOLINT
    benchmark::DoNotOptimize(cpp_sandbox::add(1, 2));  // NOLINT (readability-magic-numbers)
  }
}

static void bmSubtract(benchmark::State &state) {
  for (auto _ : state) {  // NOLINT
    benchmark::DoNotOptimize(cpp_sandbox::subtract(5, 3));  // NOLINT (readability-magic-numbers)
  }
}

BENCHMARK(bmAdd);  // NOLINT(cppcoreguidelines-avoid-non-const-global-variables)
BENCHMARK(bmSubtract);  // NOLINT (cppcoreguidelines-avoid-non-const-global-variables)
