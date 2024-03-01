#include <stdio.h>
#include <string.h>

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();

int main(void) 
{
  // ex1();
  // ex2();
  // ex3();
  // ex4();
  ex5(); // pointer array
  return 0;
}

// char pointer
void ex1() {
  char* cp = "HELLO";

  int i = 0;

  do {
    printf("*(cp + %d) : %c\n", i, *(cp + i));
  } while(*(cp + i++) != 0);

}

// int pointer
void ex2() {
  static int a[] = { 10, 20, 30, 40, 50 };

  int *pt, b, c, d;

  pt = a; // current pointer : 10
  b = *pt + *(pt + 3); // 50
  pt++; // 20
  c = *pt + *(pt + 3); // 70
  pt++; // 30
  d = *pt + *(pt - 2); // 40

  printf("b = %d, c = %d, d = %d\n", b, c, d);
}

// two dimentional array pointer
void ex3() {
  static int td_arr[3][3] = {
    { 1, 2, 3 },
    { 4, 5, 6 },
    { 7, 8, -9 },
  };

  int* td_arr_ptr;
  td_arr_ptr = td_arr[0];

  while (*td_arr_ptr != -9)
  {
    printf("%d\n", *td_arr_ptr);
    td_arr_ptr++;
  }
}

// char pointer
void ex4() {
  char ch_arr[] = "hanjae";
  char* ch_ptr = "jaylee";

  printf("length of ch_arr : %lu\n", strlen(ch_arr));

  int i;
  for (i = 0; i < strlen(ch_arr); i++) {
    printf("*(ch_arr+%d) : %c\n", i, *(ch_arr+i));
  }

  for (i = 0; i < strlen(ch_ptr); i++) {
    printf("ch_ptr[%d] : %c\n", i, ch_ptr[i]);
  }

}

// pointer array
void ex5() {
  int a[] = {1, 2, 3, 4 };  
  int b[] = {5, 6, 7, 8 };  

  int* PA[2];
  PA[0] = a;
  PA[1] = b;

  printf("*PA[0] : %d\n", *PA[0]);
  printf("*(PA[0]+1) : %d\n", *(PA[0]+1));

  printf("*PA[1] : %d\n", *PA[1]);
  printf("*(PA[1]+1) : %d\n", *PA[1]+15);
}
