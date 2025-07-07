#include<stdio.h>

void sum(int a, int b);

int main(){
    sum(3,5);
    sum(7,9);
    sum(-1,8);
    return 0;
}

void sum(int a, int b){
     printf("\n%d + %d = %d",a,b,a+b);
}     
