#include <stdio.h>

int main()
{
    int a=10;
    int b=20;
  //int *ptr;//Gv ---->wild pointer//not good way initializing a pointer
  //printf("%d %p",*ptr,ptr);
int *ptr=NULL;
  printf("%p\n",ptr);
  int ptr_malloc=(int*)malloc(1*sizeof(int));//dangling pointer also lead to segment faults
  printf("%p",ptr_malloc);
  free(ptr_malloc);
  printf("%p\n",ptr_malloc);
  ptr_malloc=NULL;
}
