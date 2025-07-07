#include<stdio.h>
int main(){
    int x=1, y=1, m, n;
    printf("Enter the number: ");
    scanf("%d", &n);

    while(x<=n){
        printf("\n"); y=1;
        while (y<=10){
            printf("\n%d x %d = %d",x,y,x*y);
            y++;
        }
        x++;
    }
    return 0;
}