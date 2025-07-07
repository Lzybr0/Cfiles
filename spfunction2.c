/* Getting Positive Measurent only  */

#include<stdio.h>
int getnum();

int main(){
    int l=0, b=0;

    printf("\nEnter Length");
    l=getnum();
    printf("\nEnter Width");
    b=getnum();

    printf("\nArea of Rectangle=%d",l*b);
    return 0;
}

int getnum(){
    int x=0;
RE:
   printf("\nPositive Value Only:");
   scanf("%d",&x);
   if( x < 0) goto RE;

   return x;
}   


