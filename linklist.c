#include<stdio.h>
#include<stdlib.h>

//structure for a node

struct Node{
       int data;
       struct Node* next;
};


void insertEnd(struct Node** head, int newData);
void insertAtBeginning(struct Node** node, int newData);
void deleteNode(struct Node** head, int key);
void displayList(struct Node* node);

//Main function to test the linked list

int main(){
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertAtBeginning(&head, 5);
    insertEnd(&head, 15);
    insertAtBeginning(&head, 25);  
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    printf("\n Linked List");
    displayList(head);

    deleteNode(&head,15);
    deleteNode(&head,20);

    printf("After Deletion");  
    displayList(head);
    return 0;   
}

//Function to insert a node at the end

void insertEnd(struct Node** head, int newData) {
     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
     struct Node* temp = *head;
     newNode->data = newData;
     newNode->next = NULL;

     if (*head == NULL){
        *head = newNode;
        return;
     }

     while(temp->next != NULL){
          temp = temp->next;
     }

     temp->next = newNode;
}

//function to delete a node by value 

void deleteNode(struct Node** head, int key){
     struct Node* temp = *head;
     struct Node* prev = NULL;

     if(temp!= NULL && temp->data == key){
         *head = temp->next;
         free(temp);
         return;
      }

      while(temp != NULL && temp->data != key){
           prev = temp;
           temp = temp->next;
      }

      if (temp == NULL)return;

      prev->next = temp->next;
      free(temp);
}

//function to display the linked list
void displayList(struct Node* node){
     while (node != NULL){
          printf("%d -> ", node->data);
          node = node->next;
        }
        printf("NULL\n");
} 

void insertAtBeginning(struct Node** head, int newData){
     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
     newNode->data = newData;
     newNode->next = *head;
     *head = newNode;
}     





