#include<stdio.h>
int main(){
    int i, j;
    printf("a");
    printf("\n");
    

    for(i=1; i<=5; i++){
        for(j=i; j<=5; j++){
            printf("%d",i);
        }
        printf("\n");
    }
    printf("\nb");
    printf("\n");
    for(i=5; i>=1;i--){
        for(j=i; j>=1; j--){
            printf("%d",i);
        }
        printf("\n");
    }
    printf("\nc");
    printf("\n");
    for(i=1; i<=5; i++){
        for(j=i; j<=5; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\nd");
    printf("\n");
    for(i=5; i>=1; i--){
        for(j=5; j>=i; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\ne");
    printf("\n");
    for(i=1; i<=5; i++){
        for(j=5; j>=i; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}