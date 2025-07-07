#include<stdio.h>
 int main(){
     int a,b,c;
     printf("\nEnter value of a: ");
     scanf("%d",&a);
     printf("\nEnter value of b: ");
     scanf("%d",&b);
     printf("\nEnter value of c: ");
     scanf("%d",&c);

     if(a>b){
       if(a>c){
          printf("\nA is the greatest");
          }
          else{
          printf("\nC is the greatest");
          }
       } 
     else{
     if(b>c){
     printf("\nb is the greatest");
     }
     else{
     printf("\nC is the greatest");
     }
     }
     return 0;
 }    
