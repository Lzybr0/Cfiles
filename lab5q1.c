#include<stdio.h>
int main(){

    char operator;
    double a,b;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);


    printf("Enter value of A: ");
    scanf("%lf", &a);

    printf("\nEnter the value of B: ");
    scanf("%lf", &b);

    switch(operator){
        case '+' :
        result = a + b;
        printf("\nThe result is %lf",result);
        break;

        case '-' :
        result = a - b;
        printf("\nThe result is %lf",result);
        break;

        case '*' :
        result = a * b;
        printf("\nThe result is %lf",result);
        break;

        case '/' :
        result = a / b ;
        printf("\nThe result is %lf",result);
        break;

        default:
        printf("Enter valid operator");
        break;
    }

    return 0;
    
    
    }