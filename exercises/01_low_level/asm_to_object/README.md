# Assembler to Objects

```bash
cd exercises/01_low_level/asm_to_objects
```

Emit assembly at `O2`:
```bash
g++ -std=c++23 -O2 -S main.cpp funcs.cpp
```

Assembly by hand:
```bash
g++ -std=c++23 -c main.s   -o main.o
g++ -std=c++23 -c funcs.s  -o funcs.o
```

## Inspect the Object Files

### Section Headers

```bash
readelf -h main.o
objdum -h main.o
```

### Symbol Table

```bash
nm main.o
objdump -t main.o
```

### Relocations

```bash
readelf --relocs main.o
objdum --reloc main.o
```

### Position Independent Code (PIC)

```bash
g++ -std=c++23 -O0 -fno-PIC -S pic_test.cpp -o no_pic.s
g++ -std=c++23 -O0 -fPIC -S pic_test.cpp -o pic.s

```
