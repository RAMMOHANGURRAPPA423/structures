#include <stdio.h>

int main()
{
    union u1{
        struct s1{
            char a[2];
            char b[2];
        }s1;
        struct s2{
            short int c;
            short int d;
        }s2;
    }u1={1,1,1,1};
    printf("%d %d %d %d",u1.s1.a[0],u1.s1.a[1],u1.s1.b[0],u1.s1.b[1]);
    printf("%d %d",u1.s2.c,u1.s2.d);
}
