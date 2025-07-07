#include<stdio.h>
#include<string.h>
int main(){
    char str1[20], str2[20];
    printf("\nEnter a string: ");
    scanf("%s", str1);


    strcpy(str2,str1);

    strrev(str2);

    if( strcmp(str1, str2) == 0){
        printf("\nString is pallindrome"); 
    }
    else{
        printf("\nString is not pallindrome");

    }
    return 0;



}

    