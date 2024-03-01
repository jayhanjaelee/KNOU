#include <stdio.h>

int main(void) {
  int score[4][3] = {
    { 90, 80, 60 },
    { 40, 55, 70 },
    { 80, 20, 55 },
    { 60, 75, 45 },
  };

  int sum;
  int i, j;

  printf("Number\tScience\tMath\tEnglish\tSum\n");

  for (int i = 0; i < 4; i++)
  {
    sum = 0;
    printf("%3d", i+1); 

    for (int j = 0; j < 3; j++)
    {
      printf("\t%3d", score[i][j]);
      sum += score[i][j];
    }

    printf("\t%3d\n", sum);
  }

  return 0;
}
