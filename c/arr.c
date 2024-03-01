#include <stdio.h>

void print_arr(size_t sz, int arr[]) {
  for (int i = 0; i < (int)sz; i++)
  {
    printf("%d ", arr[i]);
  }
}

int main(void)
{
  int arr[5] = {1,2,3,4,5};

  print_arr(sizeof(arr)/sizeof(int), arr);

  return 0;
}
