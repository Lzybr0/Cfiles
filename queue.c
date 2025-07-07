/* Queue Implementation Using Array */

#include<stdio.h>
#define SIZE 5

void enqueue(int value);
void dequeue();
void display();

int queue[SIZE], front = -1, rear = -1;

int  main(){ 
     enqueue(10);
     enqueue(20);
     enqueue(30);
     display();
     dequeue();
     display();
     return 0;
}

// Function to enqueue
void enqueue (int value) {
    if (rear == SIZE - 1) {
       printf("Queue Overflow\n");
    } else {
      if (front == -1) front = 0;
      queue[++rear] = value;
      printf("%d enqueued\n",value);
    }
}

//Function to dequeue 
void dequeue() {
     if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
     } else{
         printf("%d dequeued\n", queue[front++]);
         if (front > rear ) front = rear = -1;
     }
}

//Function to display queue elements
void display() {
    if (front == -1 ) {
       printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++){
            printf("%d", queue[i]);
        }
        printf("\n");
    } 
}




























