#include<stdio.h>
int main(){
    //wap to swap values without using 3rd using float
    float p=5.12, q=7.321;
    printf("the value before swapping p is %f\nthe value before swapping q is  %f",p,q);

    p=p+q;
    q=p-q;
    p=p-q;
    printf("\nthe vlaue of p is %f \nthe value of q is %f",p,q);
    return 0;

}