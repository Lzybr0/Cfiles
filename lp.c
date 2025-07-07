#include<stdio.h>
int main(){
    int n=1, count=1;
    do{
        printf("%d\t", n);
        n = n+2;
        count++;
    }
    while(count<=10);
    return 0;
}