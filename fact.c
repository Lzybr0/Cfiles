#include<stdio.h>

int main(){
    int fact=0, i=0, n=0;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);

    for(i=0; i<=n; i++){
        fact += i;
     }   
        printf("\nThe sum of %d number is : %d",n,fact);
    
    return 0;
}    


