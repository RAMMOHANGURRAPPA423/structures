
#include <stdio.h>

int main()
{
    int a=10;
    int b=20;
  int *ptr;//Gv ---->wild pointer//not good way initializing a pointer
  printf("%d %p",*ptr,ptr);
// int *ptr=NULL;
  printf("%p",ptr);
}
