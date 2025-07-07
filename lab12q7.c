#include<stdio.h>

int main(){
    int n, i;
    printf("\nEnter the number of elements:");
    scanf("%d",&n);
    
    int arr[n];
    printf("\nEnter %d elements: ",n);
    for ( i=0; i<n ; ++i){
         printf("\nElement %d: ",i+1);
         scanf("%d",&arr[i]);
    }

    printf("\nThe elements in the array are: ");
    for(i=0; i<n; i++){
       printf("%d\t",*(arr+i));
    }
    return 0;
}   

