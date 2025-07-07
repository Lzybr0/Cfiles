#include<stdio.h>

struct complex{
      int real;
      int img;
      };

typedef struct complex complex;

int main(){
    complex a={3,4};
    complex b = {3,2};
    complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    if(c.img < 0){
       printf("\n %d %di ",c.real,c.img);
    }
    else{
       printf("\n %d +%di ",c.real,c.img);
    }   
    return 0;
}    
