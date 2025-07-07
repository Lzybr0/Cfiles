#include<stdio.h>

int main(){

    char menu;
    printf("List of menu");
    printf("\n1. Momo : 200NPR");
    printf("\n2. Chow Mein : 150NPR");
    printf("\n3. Samosa : 30NPR");
    printf("\n4. Water : 20NPR");

    printf("\nenter no : ");
    scanf("%c", &menu);

    switch(menu){
        case '1' :
        printf("\nYou have selected Momo which costs 200NPR");
        break;

        case '2' :
        printf("\nYou have selected Chow Mein which costs 150NPR");
        break;

        case '3' :
        printf("\nYou have selected Samosa which costs 30NPR");
        break;

        case '4' :
        printf("\nYou have selected Water which costs 20NPR");
        break;

        default :
        printf("\nPlease select valid menu");
        break;
    }

    return 0;

}