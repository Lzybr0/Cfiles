#include<stdio.h>
#define n 12
int main(){
    int a[n]={3,-2,7,6,-4,-5,9,-3,1,2,-10,-12};
    int i=0, j=0, k=0, temp=0;
    for(i=0; i<n; i++){
    for(j=0; j<(n-i-1); ++j){
        if(a[j]>a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
    for(k=0; k<n; k++){
        printf("%d",a[k]);
    }
    printf("\n\n");
    }
    return 0;
}
