#include<stdio.h>
int main(){
    //wap to ask your name & number and print is as a card
    char name[25];
    long int num;

    printf("\nEnter your name:");
    scanf("%s", & name);

     printf("\nEnter your number:");
     scanf("%ld", & num);

     printf("\nName: %s",name);
     printf("\nYour number is %ld",num);
      return 0;
}