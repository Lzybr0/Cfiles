#include <stdio.h>
//to find simple interest and amount
int main(){
    int p= 10000, t=2, r=10;
    int SI=(p*t*r)/100;
    int A= (p+SI);
    printf("The simple interst is %d\n\nThe Amount is %d",SI,A);
    return 0;
}