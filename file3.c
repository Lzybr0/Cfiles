#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("arary.txt","w");
    
    int i;
    char a[] = {1,2,3,4,5};
    for (i=0; i<5; i++){
        fprintf(fp,"%d\t",a[i]);
    }
    fclose(fp);
    return 0;
}    
