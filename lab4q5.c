#include<stdio.h>

int main(){
//wap to check greatest number betwenen 3 using nested if
    int a,b,c;
    printf("\nEnter the value of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >b ){
        if(a>c){
        printf("\nA is the greatest number");
        }
    else {
        printf("\nC is the greatest number");
    }
    }
    else {
        if(b>c){
        printf("\nB is the greatest number");
        }
        else{
        printf("\nC is the greatest number");
    }
    }
    return 0;

}