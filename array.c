#include<stdio.h>
int main() {
    int a,b,c;
    printf("\nEnter the value of a: ");
    scanf("%d",&a); 
    printf("\nEnter the value of b: ");
    scanf("%d",&b);
    printf("\nEnter the value of c: ");
    scanf("%d",&c);

    if (a>b && a > c){
       printf("\nA is the greatest");
    }
    else if(b > a && b > c){
          printf("\nB is the greatest");
    }
    else{
       printf("\nC is the greatest");
    }
    return 0;
}    
