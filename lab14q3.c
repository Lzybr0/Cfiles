#include<stdio.h>

int main(){
    FILE *even;
    FILE *odd;

    even = fopen("even.txt","w");
    odd = fopen("odd.txt","w");

    int n;
    printf("\nEnter number n:");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
      // for(int j=1, j<i; j++){//
           if(i % 2 == 0 ){
       fprintf(even, "\n %d ",i);
       }
         else{
          fprintf(odd, "\n %d ",i);
          }
       }
       

    fclose(even);
    fclose(odd);
    return 0;
}    
