#include<stdio.h>

int even(int n);

int main(){
    int n;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    even(n);
    return 0;
}


int even(int n){
    if(n%2 == 0){
      printf("\nIt is even");
    }
    else{
       printf("\nIt is odd");
    }
    return n;
}
    

