#include<stdio.h>
#define n 3


struct product {
       int  item_id;
       char name[35];
       int price;
       int qty;
       int total;
};

typedef struct product p;

int main(){
    p a;
    a.total = 0; 
    int i=0;

    for (i= 0; i <n; i++){
        printf("\nEnter the item_id : ");
        scanf("%d",&a.item_id); 

        printf("\nEnter name: ");
        scanf("%s",a.name);

        printf("\nEnter price: ");
        scanf("%d",&a.price);

        printf("\nEnter the quantity: ");
        scanf("%d",&a.qty);
               
        
        printf("\n");

        a.total = a.qty * a.price;
    

     printf("total:%d",a.total);
     printf("\nItem_id:%d \tName:%s \tPrice:%d \tQuantity:%d ",a.item_id,a.name,a.price,a.qty);
  }
   return 0;
}


