#include<stdio.h>
#include<stdlib.h>
#define MAX 5 //Maximum size of the stack
//Stack structure
struct Stack {
     int arr[MAX]; //Array to store stack elements
     int top;      //Index of the top element
};
typedef struct Stack Stack;

void initalize(Stack *s);
int isEmpty(Stack *s);
int isFull(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
int peek(Stack *s);
void display(Stack *s);

int main() {
    Stack s;
    initalize(&s);

    push(&s,10);
    push(&s,20);
    push(&s,30);
    display(&s);

    printf("Popped element: %d\n",pop(&s));
    printf("Top element: %d\n",peek(&s));

    display(&s);
    return 0;
}

//Function to initialize the stack 
void initialize(Stack *s) {
    s->top = -1; //Stack is empty
}

//Function to check if the stack is empty
int isEmpty(Stack *s) {
    if(s->top == -1){
       return 1;
    } else {
       return 0;
    }
}
//Function to check if the stack is full
int isFull(Stack *s){
    if(s->top == MAX -1) {
      return 1;
    } else{
       return 0;
    }
}
//Function to push an element onto the stack
void push(Stack *s, int value){
   if (isFull(s)) {
     printf("Stack Overflow! Cannot push %d\n",value);
     }
     s->arr[++(s->top)] = value; // Increment top ad insert value
     printf("%d pushed to stack.\n",value);
}
//Function to pop an element from the stack
int pop(Stack *s) {
   if (isEmpty(s)) {
     printf("Stack Underflow! Cannot pop.\n");
     return -1; //Return an invalid value
     }
     return s->arr[(s->top)--]; //Return the top element and decrement top
     }
//Function to peek at the top element of the stack
int peek(Stack *s) {
   if (isEmpty(s)) {
      printf("Stack is empty.\n");
      return -1;
   }
   return s->arr[s->top];
}   
//Function to display the stack elements
void display(Stack *s){
   if (isEmpty(s)) {
      printf("Stack is empty.\n");
   }
   printf("Stack elements: ");
   for (int i = 0; i <= s->top; i++)
      printf("%d",s->arr[i]);
    printf("\n");
}    


