/*Queue Implementation using Link List */
#include<stdio.h>
#include<stdlib.h>
//Define structure for queue node 
struct Node {
     int data;
     struct Node* next;
};
typedef struct Node Node;
void enqueue(int value);
void dequeue();
void display();

Node *front = NULL, *rear = NULL;
int main(){
     enqueue(10);
     enqueue(20);
     enqueue(30);
     display();
     dequeue();
     display();
     return 0;
}

//Function to enqueue
void enqueue(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    } else {
      rear->next = newNode;
      rear = newNode;
    }
    printf("%d enqueued\n", value);
}

//Function to dequeue 
void dequeue() {
   if (front == NULL) {
       printf("Queue Underflow\n");
   } else {
      Node* temp = front;
      printf("%d dequeued\n", front->data);
      front = front->next;
      free(temp);
      if (front == NULL) rear = NULL;
   }
}

// Funtion to display queue elements
void display() {
   if (front == NULL) {
       printf("Queue is empty\n");
   } else{
     Node* temp = front;
     printf("Queue elements: ");
     while (temp != NULL) {
          printf("%d",temp->data);
          temp = temp->next;
     }
     printf("\n");
   }
}   






























    



