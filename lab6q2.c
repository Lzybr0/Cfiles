#include<stdio.h>
int main(){
    int prime, i, n;
    printf("\nEnter the number:");
    scanf("%d", &n);

       prime = 1;

    for(i = 2; i<n; ++i){
        if(n % i == 0){
        prime = 0;
    }
    }
    if (prime ==1){
        printf("\nprime");
    }
    else{
        printf("\ncomposite");
    }
    return 0;


}