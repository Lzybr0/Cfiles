#include<stdio.h>

int main(){
//wap to check the num is exactly divisible by 5 and 11 using nested if
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    if (num%5 == 0 ){
        if(num%11==0){
        printf("\nIt is divisible by both 5 and 11");
    }
    else{
         
        printf("\nIt is divisble by 5 but not by 11");
    }
    }
    else{      
    if(num%11 == 0){
        printf("\nIt is divisible by 11 but not by 5"); 
    }
    
    else{
        printf("\n%d is neither divisible by 5 nor by 11",num);
    }
    }
    return 0;
}