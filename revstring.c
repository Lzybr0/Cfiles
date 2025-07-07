#include<stdio.h>
#include<string.h>

int main() {

    char name[30];
    printf("\nEnter a name: ");
    scanf("%s",name);

    strrev(name);

    printf("%s",name);
    return 0;
}    
