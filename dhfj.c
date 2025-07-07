#include<stdio.h>

int main(){
    int a=5, b=7;
    int *p[2];
    p[0]=&a; p[1]=&b;
    *p[0]=*p[0]+10;
    *p[1]=*p[1]+5;
    printf("%d %d",a,b);
    return 0;
}