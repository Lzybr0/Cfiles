#include<stdio.h>

int si(int p, int t, int r);

int main(){
    printf("calling the function:");
    si(5000,2,3);
    printf("\nafter callling");
    return 0;
}

int si(int p, int t, int r){
    int si;
    si = (p*t*r)/100;
    printf("\nThe simple interest is %d",si);
    return 0;
}    
