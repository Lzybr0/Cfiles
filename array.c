//add 5 float numbers provided by user

#include<stdio.h>
int main(){
    int i=0;
    float a[5],sum=0;
    for(i=0; i<5; ++i){
    printf("\nEnter number: ");
    scanf("%f", &a[i]);
    }

    for(i=0; i<5; ++i){
        sum += a[i];
        printf("\n%f",sum);
    }
    return 0;
}
        
        
  