#include<stdio.h>
#include<math.h>
 //wap to find the root of a quadratic eqn
 int main(){

    int a = 2, b = 5, c = 7;
    float x = (-b + sqrt(b*b-4*a*c)/(2*a));
    float y = (-b - sqrt(b*b-4*a*c)/(2*a));
    printf("\nThe root 1 of qudratic eqn is %f",x);
    printf("\nThe root 2 of quadratic eqn is %f",y);
    return 0;

 }

    