#include<stdio.h>
int main(){
    char op=0;
    int a, b;
    printf("\nEnter an operator + - * /: "); 
    scanf("%c",&op);
    printf("\nEnter value of a: ");
    scanf("%d",&a);
    printf("\nEnter value of b: ");
    scanf("%d",&b);

    switch(op){
    case '+':
    printf("\nThe addition of %d + %d =%d",a,b,a+b);
    break;

    case '-':
    printf("\nThe subtraction of %d - %d =%d",a,b,a-b);
    break;

    case '*':
    printf("\nThe multiplication of %d * %d =%d",a,b,a*b);
    break;

    case '/':
    printf("\nThe divison of %d / %d =%d",a,b,a/b);
    break;
    }

    return 0;
    }

