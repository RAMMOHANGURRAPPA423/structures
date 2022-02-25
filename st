
#include <stdio.h>

int main()
{
    union u1{
        struct s1{
            short int a;
            short int b;
           
        }s1;
        struct s2{
             char c[2];
            char d[2];
            char e[2];
        }s2;
    }u1={1,1,1};
    printf("%d %d %d %d",u1.s1.a,u1.s1.b,u1.s2.c[0],u1.s2.c[1]);
    printf("%d %d %d %d ",u1.s2.d[0],u1.s2.d[1],u1.s2.e[0],u1.s2.e[1]);
}
