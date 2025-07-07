#include<stdio.h>
int gcd(int a, int b);
int main(){
    printf("Enter a and b: ");
    scanf("%d %d",&a,&b);
    printf("GCD =%d",gcd(a,b));
    return 0;
}
int gcd(int a, int b){
    if (b==0){
    return a;
    }
    else{
    return gcd(b,a%b);
    }
}
