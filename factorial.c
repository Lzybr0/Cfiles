#include<stdio.h>
int main(){

    int i=0, n=0, fact=1;
    printf("Enter the number n: ");
    scanf("%d", &n);

    for(i = n; i>=1; i--){

        fact = fact * i;
    }
    printf("%d! = %d",n,fact);
    return 0;
}