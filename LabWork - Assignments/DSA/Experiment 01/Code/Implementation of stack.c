#include <stdio.h>
#include <stdlib.h>
#define MAX 50  //Max size of stack
int stack[MAX]; //Defining stack
int top;        //Defining top

//Function Prototype
void initialize();
int isEmpty();
int isFull();
int size();
void push(int);
void pop(int *);
void peek();
void display();

int main()
{
    int num, elem;
    int popped, peeked;
    initialize();
    //Enter choices
    while (1)
    {
        printf("\n");
        printf("* 1 -> PUSH");
        printf("\n* 2 -> POP");
        printf("\n* 3 -> PEEK");
        printf("\n* 4 -> DISPLAY");
        printf("\n* 5 -> SIZE");
        printf("\n* 6 -> EXIT\n");
        scanf("%d", &num);
        printf("\n\t");
        if (num == 1) { 
            printf("\n--Enter a number to push--   ");
            scanf("%d", &elem);
            push(elem);
        }
        else if (num == 2) { 
            pop(&popped);
        }
        else if (num == 3) { 
            peek(&peeked);
        }
        else if (num == 4) { 
            display();
        }
        else if (num == 5) { 
            printf("\n--Currently, size of stack is  =>  %d", size());
        }
        else if (num == 6) { 
            printf("\n\n************************\n");
            break;
        }
        else { 
            printf("\nINVALID INPUT");
        }
    }
    return 0;
}

// ? To initialize a new stack
void initialize() {
    top = -1;
}

// ? check if stack is empty
    // 1 if empty
    // 0 if not empty
int isEmpty() {
    if (top == -1)
        return 1;
    return 0;
}

// ? Return size of stack
int size() {
    return top + 1;
}

// ? check if stack is full
    // 1 if stack is full
    // 0 if stack is not full
int isFull() {
    if (top == MAX - 1)
        return 1;
    return 0;
}

// ? insert elemtent in stack
void push(int elem) {
    if (isFull()) {
        printf("\nOVERFLOW");
        return;
    }
    top++;
    stack[top] = elem;
}

// ? remove element from stack
void pop(int *popped) {
    if (isEmpty()) {
        printf("\nUNDERFLOW");
        return;
    }
    *popped = stack[top];
    top--;
    printf("--Popped element is  =>  %d", *popped);
}

// ? prints the top element of stack
void peek(int *peeked) {
    if (isEmpty())
    {
        printf("\nUNDERFLOW");
        return;
    }
    *peeked = stack[top];
    printf("--Top value is  =>  %d", *peeked);
}

// ? display all the contents of stack
void display() {
    int i;
    if (isEmpty()) {
        printf("\nEMPTY");
    }
    else {
        printf("\nElements in Stack are :  ");
        for (i = 0; i <= top; i++) {
            printf("%d\t", stack[i]);
        }
    }
}
