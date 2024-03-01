#include <stdio.h>

struct person {
  int height;
  int weight;
  int age;
  char name[10];
};

void ex1(void);

int main(void)
{
  ex1();   


  return 0;
}

void ex1(void) {
  struct person people[3] = {
    { 178, 70, 32, "hanjae" },
    { 160, 60, 27, "foo" },
    { 172, 68, 22, "bar" },
  };

  struct person* people_ptr;
  people_ptr = people;
  
  printf("%d %s\n", people_ptr->height, people_ptr->name);

  // int i;
  // for (i = 0; i < 3; i++) {
  //   printf("%d %d %d %s\n", 
  //       (people_ptr+i)->height,
  //       (people_ptr+i)->weight,
  //       (people_ptr+i)->age,
  //       (people_ptr+i)->name);
  // }
}
