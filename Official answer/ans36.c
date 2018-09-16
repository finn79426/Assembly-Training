#include <stdio.h>

struct student{
  int year;
  int id;
};

void myfunc(struct student n){
  printf("id=%d\n",n.id);
}

int main(void){
  struct student data;
  data.year = 2016;
  data.id = 1;
  myfunc(data);
  return 0;
}
