#include<stdio.h>
#include<string.h>
int main(){
    char  name[20], username[20];
    strcpy(name, "Kushal");
    printf("Enter username: ");
    scanf("%s", username);
    if (strcmpi(name, username)==0){
        printf("Username matched\nUsername: %s", username);    
    }
    else{
        printf("\nWrong Username. Please try again later");
    }
    return 0;
}