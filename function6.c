#include<stdio.h>
void mul(int n);

int main(){
    int n;
    printf("\n Enter value of n:");
    scanf("%d",&n);
    mul(n);

    return 0;
}

void mul(int n){
     for(int i=1; i<=10; i++){
     printf("\n %d * %d = %d",n,i,n*i);
     }
     }
 
