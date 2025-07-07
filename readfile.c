#include<stdio.h>

int main(){ 
    FILE *fp;
    char ch;
    fp = fopen("into.txt","r");
    ch = getc(fp);
    while(ch != EOF)   //End of file -1  //

         printf("%c",ch);
         ch = getc(fp);
    }

    fclose(fp);
    return 0;
}    
