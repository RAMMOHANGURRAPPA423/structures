#include <stdio.h>
int sum(int n){
    int s=0;
    if(n==0)
    return 0;
    else
    s=n+sum(n-1);
    return s;
}
void main(){
    int a;
    a=sum(5);
    printf("%d",a);
}
