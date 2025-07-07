#include<stdio.h>

int main(int argc, char *argv[]){
    char name[20];
    if(argc == 1){
       printf("\nEnter Your Name");
       scanf("%s",name);
       printf("Your Name = %s", name);
       } else {
          printf("\nYou have entered %d arguments",argc);
          printf("\nCommand = %s ",argv[0]);
          printf("\nYour Name = %s",argv[1]);
          printf("\n");
       }

       return  0;
}       
