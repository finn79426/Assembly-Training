#include <stdio.h>
#include <string.h>

int strcmp_func(char *str){
  if(strcmp(str,"Alice") == 0){
    return 1;
  }
  return 0;
}

int main(void)
{
  char name[] = "Alice";
  int flag;

  flag = strcmp_func(name);

  if(flag == 1){
    printf("Hey Allice\n!");
  }

  return 0;
}
