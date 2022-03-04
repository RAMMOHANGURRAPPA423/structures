#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int*)malloc(sizeof(int));
    *ptr=20;
    free(ptr);
    int* null;
   ptr=null;
printf("%p",ptr);
    return 0;
}
