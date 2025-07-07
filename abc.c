//swap to variables using call by refrence//
#include<stdio.h>
void swap(int *a, int *b);

int main(){
    int x=5, y=9;
    printf("\n%d %d",x,y);
    swap(&x,&y);
    printf("\n%d %d",x,y);
    return 0;
}

void swap(int *x, int *y){
    int temp =0;
    temp=*x;
    *x=*y;
    *y=temp;   
}