#include<stdio.h>
#define n 2

struct item{
      int id;
      char name[20];
      int price;
      int qty;
      int amount;
};

typedef struct item I;

int main(){
    I a;
    int i=0;
    FILE *item;
    item = fopen("items.txt","w");
    for (i=0; i<n; i++){
        printf("\nEnter ID: ");
        scanf("%d",&a.id);
        printf("\nEnter Name: ");
        scanf("%s",a.name);
        printf("\nEnter price: ");
        scanf("%d",&a.price);
        printf("\nEnter quantity: ");
        scanf("%d",&a.qty);
        a.amount = a.price * a.qty;
        fprintf(item,"\nId = %d \tNAME = %s \tPRICE = %d \tQUANTITY= %d \tAMOUNT= %d",a.id,a.name,a.price,a.qty,a.amount);
    }
    fclose(item);
    return 0;
}    
    








      

