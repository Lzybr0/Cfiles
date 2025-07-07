#include<stdio.h>

int main(){

    char grade;

    printf("Enter your grade : ");
    scanf("%c", &grade);

    switch (grade){
        case 'A' :
        printf("\nExcellent");
        break;

        case 'B' :
        printf("\nGood");
        break;

        case 'C' :
        printf("\nAverage");
        break;

        case 'D' :
        printf("\nBelow Average");
        break;

        case 'F' :
        printf("\nFail");
        break;
         }

         return 0;

}