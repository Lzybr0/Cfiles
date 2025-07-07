#include<stdio.h>
int main(){
    int p=5, q=3,r=5;
    printf("\n%d +=%d is %d",p,q,r+=q);
    printf("\n%d -=%d is %d",p,q,r-=q);
    printf("\n%d *=%d is %d",p,q,r/=q);
    printf("\n%d %=%d is %d",p,q,r%=q);
    return 0;

}