#include<stdio.h>
int main(){
    int x=5, y=7;
    int *p1, *p2;
    p1=&x, p2=&y;
    printf("Value of x:%d \n Value of y:%d",x,y);

    *p1= *p1 + *p2;
    *p2= *p1 - *p2;
    *p1= *p1 - *p2;
    printf("\nValue of x:%d \n Value of y:%d",x,y);
    return 0;
}    

