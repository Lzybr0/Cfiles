#include<stdio.h>
#define m1
int main(){
    int n, i=1;
    printf("Enter thentable no: ");
    scanf("%d", &n);

    for (i=1; i<=10; i++){
        printf("\n%d x %d = %d",n,i,n*i);
        

    }
    return 0;
}