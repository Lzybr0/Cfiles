/* to calculate factorial of a number using function*/i

#include<stdio.h>

int fact( int n);

int main(){
    
    fact(int n);
    return 0;
}

int fact( int n){
    int i=0, j=0, fact=0;
    printf("\nEnter the value of n: ");
    scanf("%d", &j);
    for(i=j; i<=1; i--){
      fact+=i;
      printf("\n factoriral is %d: ",fact);
      }
      return n;
}      
    
