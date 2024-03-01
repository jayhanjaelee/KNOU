#include <stdio.h>
#include "extern_var.c"

extern int a;
extern int b;
 
int main(void) {

  printf("a = %d\nb = %d\n\n", a, b);

  return 0;
}

