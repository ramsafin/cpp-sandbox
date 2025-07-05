// pic_test.cpp
extern int global_value;  // NOLINT(*-non-const-global-variables)

void setValue(int value) {
  global_value = value;
}
