#include<stdio.h>
int main(){
    int i=0, fact=1, n=0;
    printf("\nEnter value of n: ");
    scanf("%d",&n);

    for(i=n; i>=1; i--){
    fact*=i;
    }
    printf("\n The factorial of %d = %d",n,fact);
    
    return 0;
}    

