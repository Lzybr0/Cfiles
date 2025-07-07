#include<stdio.h>

int main(){
    int choice=0;
    float a,b;
    float n;

Menu:
     printf("\n1. Addition");
     printf("\n2. Subtraction");
     printf("\n3. Multiplication");
     printf("\n4. Divison");
     printf("\n5. Exit");
     printf("\nEnter your choice ");
     scanf("%d",&choice);

     if (choice == 1){
        printf("\nEnter the value of a: ");
        scanf("%f",&a);
        printf("\nEnter value of b: ");
        scanf("%f",&b);
        printf("\nAdditon  = %f",a+b);

      goto Menu;
      }

      else if (choice == 2){
         printf("\nEnter the value of a: ");
         scanf("%f",&a);
         printf("\nEnter the vlaue of b: ");
         scanf("%f",&b);
         printf("\nSubtraction = %f",a-b);

       goto Menu;
       }


       else  if (choice == 3){
          printf("\nEnter the value of a: ");
          scanf("%f",&a);
          printf("\nEnter the value of b: ");
          scanf("%f",&b);
          printf("\nMultiplication = %f",a*b);

        goto Menu;
        }

       else  if (choice == 4){
          printf("\nEnter the value of a: ");
          scanf("%f",&a);
          printf("\nEnter the valye of b: ");
          scanf("%f",&b);
          printf("\nDivision = %f",a/b);

        goto Menu;
        }


        else if(choice == 5){
             return 0;
        }

        else{
           goto Menu;
           }
           }
             
