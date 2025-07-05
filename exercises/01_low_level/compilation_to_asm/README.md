# Compilation to Assembler

```bash
cd exercises/01_low_level/compilation_to_asm
```

Emit assembly at `O0` (no optimizations):
```bash
g++ -std=c++23 -O0 -S main.cpp funcs.cpp
```

Emit assembly at `O2` (optimize):
```bash
g++ -std=c++23 -O2 -S main.cpp funcs.cpp
```

Intel syntax:
```bash
g++ -std=c++23 -O2 -S main.cpp funcs.cpp -masm=intel
```

Verbose assembly:
```bash
g++ -std=c++23 -O2 -g -fverbose-asm -S main.cpp funcs.cpp
```

Function calls vs inlining:
- at O0 `sumFree` and `MyStruct::increment` should remain as calls
- at O2 the compiler may inline small functions (check for absence of calls)


Template codegen:
- `mult<5,7>` must be inlined/constant-folded into immediate values
