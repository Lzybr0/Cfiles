#include<stdio.h>
int fib(int n);
int main(){
    int i=0, res = 0;
    for(i=1; i<=10; ++i){
        res=fib(i);
        }
    res =fib(5);
    printf("\n5th term :%d",res);
    return 0;
}
int fib(int n){
    if(n==1){return 1;}
    else if(n=2) { return 1;}
    else{
    return fib(n-1)+fib(n-2);
    }
    }
  


