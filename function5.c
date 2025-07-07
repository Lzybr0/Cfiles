//function having argument as well as return value

#include<stdio.h>

int sum(int a, int b);

int main(){
    int a=4, b=4, s=0;
    s=sum(a,b);
    printf("\nSum: %d",s);
    return 0
}

int sum(int a, int b){
    return a+b;
}    
    
