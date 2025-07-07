#include<stdio.h>

int main(){
    FILE *square;
    square = fopen("square.txt","a");

    int l=12, area;
    area = l * l;
    fprintf(square, "Area : %d",area);

    fclose(square);

    return 0;
}
