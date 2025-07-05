#pragma once

// Demonstration of conditional compilation and configuration flags.

// User tweak at compile time:
//   -DCONFIG_VALUE=42     custom integral constant
#ifndef CONFIG_VALUE
#define CONFIG_VALUE 100
#endif
