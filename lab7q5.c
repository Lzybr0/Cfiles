#include<stdio.h>
int main(){
    int a[10]= {10,5,7,3,1,4,6,12,8,14};
    int i = 0, n=0, f=-1;

    printf("enter the number n:");
    scanf("%d", &n);

    for(i=0; i<10; i++){
     if(n==a[i]){
        f=i;
     }
    }
    if(f!=-1){
       printf("\n%d The elements exists at a[%d]",a[f],f); 
        
       }
    else{
    printf("\nThe element doesnt exist");
    }
    
    return 0;
}

