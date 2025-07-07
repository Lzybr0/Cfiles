#include<stdio.h>
int main(){
    int n=0, i=0, fact=1;
    printf("\nEnter the n: ");
    scanf("%d", &n);

    for(i=n; i>=1; i--){
        fact *= i;
    }
    printf("%d! = %d",n,fact);
    return 0;
}