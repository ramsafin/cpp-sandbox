# Preprocessing

```bash
cd exercises/01_low_level/preprocessing
```

Run the preprocessor on `main.cpp`:
```bash
g++ -std=c++23 -E main.cpp -o main.i
```

Inpspect:
- Expanded macros `#define`
- Inline inlcuded headers `#include`
- Conditional blocks `#ifdef`

Enable feature `ENABLE_FEATURE`:
```bash
g++ -std=c++23 -DENABLE_FEATURE -E main.cpp -o main.i
```

Change constant `CONFIG_VALUE`:
```bash
g++ -std=c++23 -DCONFIG_VALUE=25 -E main.cpp -o main.i
```
