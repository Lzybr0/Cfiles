#include<stdio.h>

void rectangle(int l, int b, int *a, int *p);

int main(){
     int l=5, b=3, area=0, peri=0;
     rectangle(l,b,&area,&peri);
     printf("Area:%d",area);
     printf("\nPerimeter:%d",peri);
     return 0;
}

void rectangle(int x, int y, int *a, int *b){
    *a = x*y;
    *b = 2*(x+y);
}