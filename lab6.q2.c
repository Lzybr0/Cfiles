#include<stdio.h>
int main(){
    int i=0,j=0, prime=0, n;
    printf("\nEnter number n: ");
    scanf("%d", &n);

    for (i=2; i<=n; ++i){
        prime=1;
        for(j=2; j<i; ++j){
        if(i % j == 0){
            prime =0;
        }
        }
        if(prime == 1){
            printf("\nPrime number: %d",i);
        }
    }
        return 0;
}