#include<stdio.h>

int main(){
    int year;
    printf("Enter the year: " );
    scanf("%d", &year);
//wap to check leap year using nested if
    if(year%4 == 0){
        if(year%100 == 0 && year%400 ==0){
            printf("\n%d is a leap year",year);
        }
        else if(year%100 == 0){
            printf("\n%d is not a leap year",year);
        }
        else{
            printf("\n%d is a leap year",year);
        }
    }
    else{
        printf("\n%d is not a leap year",year);
    }
    return 0;
}