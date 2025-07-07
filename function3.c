//function with no argument, but has return value

#include<stdio.h>

int sum();

int main(){
    int s=0;
    s=sum();
    printf("\nSum : %d",s);
    return 0;

int sum(){
    int a=3, b=5;
    return a+b;
}    
