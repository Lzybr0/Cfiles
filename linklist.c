#include<stdio.h>
#include<stdlib.h>

//structure for a node

struct Node {
    int data;
    struct Node* next; 
};

void insertEnd(struct Node** head, int newData);
void deleteNode(struct Node** head, int key);
void displayList(struct Node* node);

//MAin function to test the linked list

int main(){
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    printf("\n Linked List");
    display(head);

    deleteNode(&head,20);
    printf("After Deletion");
    displayList(head);

    return 0;

}

//Function 