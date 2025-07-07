#include<stdio.h>
int main(){
    int i=0, j=0;
    printf("\n");

    for(j=1; j<=5; j++){
        for(i=1; i<=j; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}