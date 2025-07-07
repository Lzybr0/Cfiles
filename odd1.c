#include<stdio.h>
int main(){
    int n=0;
    printf("\nEnter the number: ");
    scanf("%d",&n);

    if (n % 2 == 0){
       printf("\nIt is even");
    }
    else {
       printf("\nIt is odd");
    }
    return 0;
}    
