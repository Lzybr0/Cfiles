#include<stdio.h>


int main(){
    int n =1, i=1;

    for(i=1; i<=10; ++i){
        printf("%d\t",n);
        n = n+2;
    }
    return 0;
}