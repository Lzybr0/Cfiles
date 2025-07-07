/*WAP to declare and intialize 3 time structure variables and display sum of them*/

#include<stdio.h>

struct Time{
       int hr;
       int min;
       int sec;
};

typedef struct Time Time;

int main(){
    Time a ={3,5,4};
    Time b ={4,2,1};
    Time d ={1,7,9};
    Time c;
    c.hr = a.hr + b.hr + d.hr;
    c.min = a.min + b.min + d.min;
    c.sec = a.sec + b.sec + d.sec;
    printf("\n %d %d %d ",c.hr,c.min,c.sec);
    return 0;
}    


