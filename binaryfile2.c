#include<stdio.h>
/*
struct Item {
       char name[20];
       int price;
       int qty;
       int amt;
};

typedef struct Item Item;

int main(){
    FILE *fp;
    /* writing in a binary file using fwrite*/

   /* fp = fopen("items.bin","ab");
    Item i = {"Pencil", 10,5};
    i.amt = i.price * i.qty;

    fwrite( &i, sizeof(i), 1 , fp);

    fclose(fp);
    return 0;
    }
    */


struct Item {
     char name[20];
     int price;
     int qty;
     int amt;
};

typedef struct Item Item;

int main(){
    FILE *fb;
    /*reading in binary mode*/
    Item it;
    fb = fopen("items.bin","rb");
    fread(&it,sizeof(it),1,fb);

    printf("\nName\tPrice\tQuantity\tAmount");
    printf("\n%s\t%d\t%d\t%d",it.name,it.price,it.qty,it.amt);

    fclose(fb);
    return 0;
}    




