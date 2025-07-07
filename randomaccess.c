#include<stdio.h>

int main(){
    FILE *ra;

    ra = fopen("random.txt","w");
    printf("\n%d",ftell(ra)); //use of ftell to find cursor position//

    fprintf(ra,"This is random file access.");
    fseek(ra,15,0); //use of fseek to move cursor to 15 position//
    fprintf(ra,"contnt after fseek function");

    rewind(ra); //use of rewind to reset cursor position//
    printf("\n%d", ftell(ra));

    fclose(ra);

    return 0;
}    
