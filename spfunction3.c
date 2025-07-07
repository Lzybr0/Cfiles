/*Getting menu choice from function */

#include<stdio.h>

int menu();

int main(){
    int a=0, b=0;
    int choice =0;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a , &b );
    choice = menu();

    switch(choice){
    case 1: printf("Sum: %d",a+b);break;
    case 2: printf("Difference:%d",a-b);break;
    case 3: printf("Multiply:%d",a*b);break;
    case 4: printf("Division:%d",a/b);break;
    default: printf("\nWrong Menu Selected");
    };
    return 0;
}

int menu(){
    int n=0;
    printf("\n 1 for addition");
    printf("\n 2 for subtraction");
    printf("\n 3 for multiplication");
    printf("\n 4 for divison");
    printf("\n Enter your choice: ");
    scanf("%d", &n);
    return n;
}    
    
