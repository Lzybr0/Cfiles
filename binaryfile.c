#include<stdio.h>


int main(){
    
    FILE *fp;
/*    
    fp =fopen("bin1.bin","wb");
    int x = getw(fp);
    printf("%d",x);
*/

    
    fp = fopen("bin1.bin","rb");
    putw(200,fp);
  

    fclose(fp);
    return 0;
}    
