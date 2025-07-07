#include<stdio.h>
#define PI 3.14159
//find the area and perimeter of circle
int main(){
    float r= 3.5;
    float A=PI*(r*r);
    float P= 2*PI*r;
    printf("The area of circle is %f\n\nThe perimeter of circle is %f",A,P);
    return 0;
}