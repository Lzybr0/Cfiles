#include<stdio.h>

int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("\nYou are eligible to vote! ");
    }

    else{
        printf("\nYou are not eligible to vote! ");

    }
    return 0;
}