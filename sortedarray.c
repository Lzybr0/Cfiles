#include<stdio.h>
#define n 12
int main(){
    int a[n]={3,-2,7,6,-4,-5,9,-3,1,2,-10,-12};
    int i=0, si=0;
    int j=0, temp=0, k=0;
    //unsorted array
    for(i=0; i<n; i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        si=i;
        for(j=i; j<n; j++){
            if(a[si]>a[j]){
                si=j;
            }
        }
        //swapping values
        temp=a[i];
        a[i]=a[si];
        a[si]=temp;
    
    //sorted arrray
    for(k=0; k<n; k++){
        printf("%d\t",a[k]);
    }
    }
    return 0;
}