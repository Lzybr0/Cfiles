#include<stdio.h>

int main(){
    float f1=10.50, f2=5.01, f3=0.0;
    float *fp;
    fp=&f3;
    /*printf("Enter floating numbers:");
      scanf("%f %f",f1,f2) */

      *fp=f1+f2;

      printf("\nAdittion of 2 floating Number is %f",f3);
      return 0;
}      
