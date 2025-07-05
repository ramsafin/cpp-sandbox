# Linking

```bash
cd exercises/01_low_level/linking
```

```bash
g++ -std=c++23 -c main.cpp funcs.cpp
g++ -std=c++23 main.o funcs.o -o program
```

```bash
readelf -l program
```


```bash
ldd program
readelf -d program
```

```bash
nm -C program
```

```bash
objdump -d program | less
```
