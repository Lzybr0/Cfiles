/* Getting valid age only*/

#include<stdio.h>

int getnum();

int main(){
    int age =0;
    age = getnum();
    if( age >= 18){
        printf("\n You are ready to vote");
      } else {
         printf("\n You are not ready yet!");
      }
      return 0;
}

int getnum(){
    int x=0;
RE:    
    printf("\nEnter positive value only: ");
    scanf("%d", &x);
    if( x < 0) goto RE;

    return x;
}    


