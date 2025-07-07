/*WAP to declare and initialize two variables of height structure and display sum of them. */

#include<stdio.h>

struct height{
       int ft;
       int inch;
};

typedef struct height height;

int main(){
    height a={5,4};
    height b={8,9};
    height c;
    c.ft = a.ft + b.ft;
    c.inch = a.inch + b.inch;
    while(c.inch >= 12){
       c.inch = c.inch-12;
       c.ft = c.ft+1;
     //  printf("\n %d %d ",c.ft,c.inch)//;
    }   
    printf("\n %d %d ",c.ft,c.inch);
    return 0;
}    
