//function which has argumens but no return value
#include<stdio.h>

void sum(int a, int b);

int main(){
    int x=5, y=7;
    sum(x,y);
    return 0;
}
void sum(int a, int b){
     printf("\nSum: %d",a+b);
}     
