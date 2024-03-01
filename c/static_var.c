#include <stdio.h>

void test(void);

int main(void) {
  int i = 0;

  while (i < 3) {
    test(); 
    i++;
  }

  return 0;
}

void test(void) {
  auto int a = 0;
  static int b = 0;

  printf("a = %d\nb = %d\n\n", a, b);
  a++;
  b++;
}
