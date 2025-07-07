#include<stdio.h>
//wap to check the num is even or odd
int main(){
    int x = 0;
    printf("Enter the number: ");
    scanf("%d", &x);

    if (x%2 == 0){
        printf("\nThe number is even");
    }
    else{
        printf("\nThe number is odd");
    }
    return 0;


}