#include<stdio.h>

int main(){ 
    int choice = 0;
    int age = 0;
    int num = 0;

Menu: 
    printf("\n1. Vote Eligibility Check");
    printf("\n2. Even Odd Program");
    printf("\n3. Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    if(choice == 1){
       printf("Enter your age:");
       scanf("%d",&age);

       if(age >= 18){
          printf("\nYou are eligible");
       } else {
           printf("\nYou are not eligible");
       }
       goto Menu;
       }

        else if (choice == 2 ){
          printf("\nEnter an number: ");
          scanf("%d",&num);

          if (num % 2 == 0){
              printf("\nIt is even");
          } else {
               printf("\nIt is odd");
          }
          goto Menu;
          }

         else if (choice == 3){
              return 0;
          }
          else {
             goto Menu;
          }
}
