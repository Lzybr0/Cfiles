#include<stdio.h>

int main(){
    int len, bre, area;
    FILE *fp;
    fp = fopen("rectangle.txt","w");

    printf("\nEnter len: ");
    scanf("%d",&len);

    printf("\nEnter bre: ");
    scanf("%d",&bre);

    area = len * bre;

    fprintf(fp,"/nThe area is :%d",area);

    fclose(fp);
    return 0;
}    

