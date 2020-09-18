#include <stdio.h>
#include <stdlib.h>
// Implementation of circular linked list

// declaration of node of linked list
struct node {
    int data;
    struct node *next;
};

// declaration of end
struct node *end = NULL;

void insertAtEnd(int val) {
    // declaring and allocating memory of new node
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    
    //declaring a traversing pointer
    struct node *ptr;
    ptr = end->next;

    // initializing
    newNode->data = val;

    if (end == NULL) {    // entering the first node
        end = newNode;
        newNode->next = end;
    } else {    // entering any other node
        
        while (ptr-> != end) {
            ptr = ptr->next;
        }
        newNode->next = end;
        ptr->next = newNode;
        end = newNode;
    }

}

void display() {
    // declaring a traversing pointer
    struct node *ptr;
    ptr = end->next;
    while (ptr->next != end) {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d  ", ptr->data);

}

int main() {
    insertAtEnd(5);
    insertAtEnd(10);
    insertAtEnd(15);
    insertAtEnd(20);
    display();

    return 0;
}
