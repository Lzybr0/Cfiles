#include<stdio.h>
int main(){
   //wap to enter the value of cp and sp and determine profit or loss
   int cp, sp;
   printf("\nEnter Cost price:");
   scanf("%d",& cp);
   printf("\nEnter Selling price:");
   scanf("%d",& sp);
   int pr=(sp - cp);
   int loss=(cp -sp);
   (sp>cp)?
   printf("\nIt is profit= %d",pr):
   printf("\nIt is loos= %d",loss);
   return 0;
}

