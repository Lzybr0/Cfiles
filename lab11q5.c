#include<stdio.h>

struct complex {
       int real;
       int img;
};

typedef struct complex complex;

int main(){
    complex a,b,c;
    printf("\nInput real and imaginary of A : ");
    scanf("%d %d",&a.real,&a.img);

    printf("\nInput real and imaginary of B :");
    scanf("%d %d",&b.real ,&b.img);

    c.real=a.real+b.real;
    c.img=a.img+b.img;

    if( c.img < 0){
       printf("\n%d + %d",c.real,c.img);
       }
       else{
       printf("\n%d + %d i",c.real,c.img);
       }
     
     return 0;
}     






