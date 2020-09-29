#include <stdio.h>
#include <stdlib.h>
// Implementation of Doubly linked list

// Declaration of node
struct node {
    int data;
    struct node *previous;
    struct node *next;
};

// Declarartion of start of linked list
struct node *start = NULL;

void insertAtBeginning(int toInsert) {    // Inserts at the beginning of the node

    // declaration, memory allocation and initialization of new node
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = toInsert;

    if (start == NULL) {    // first node of is added
        newNode->next = NULL;
        newNode->previous = NULL;
        start = newNode;
    } else {
        // linking newNode before current start
        newNode->next = start;
        newNode->previous = NULL;
        start->previous = newNode;

        // shifting start
        start = newNode;
    }

}

void insertAtEnd(int toInsert) {    // Inserts at the end of the list

    // declaration, memory allocation and initialization of new node
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = toInsert;

    // traversing pointer
    struct node *ptr = start;

    if (start == NULL) {    // first node is to be added
        newNode->next = NULL;
        newNode->previous = NULL;
        start = newNode;
    } else {    // any other node
        while (ptr->next != NULL) {    // traverse upto currnet last node
            ptr = ptr->next;
        }
        // link current last node with newNode
        ptr->next = newNode;
        newNode->previous = ptr;
        newNode->next = NULL;
    }

}

void insertBeforeVal(int toInsert, int val) {    // Inserts node before val is encountered

    if (start == NULL) {    // checks if list is empty
        printf("\nList is empty!");
        return;
    }

    // declaration, memory allocation and initialization of new node
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = toInsert;

    // traversing pointer
    struct node *ptr = start;

    while (ptr->data != val) {    // traverse until val is encountered
        ptr = ptr->next;
    }
    
    if (ptr->previous == NULL) {    // inserting before current first node
        // linking new node with current first node
        newNode->next = ptr;
        newNode->previous = NULL;
        ptr->previous = newNode;
        // shifting start
        start = newNode;
    } else {
        // linking nodes before val
        newNode->next = ptr;
        newNode->previous = ptr->previous;
        ptr->previous->next = newNode;
        ptr->previous = newNode;
    }

}

void insertAfterVal(int toInsert, int val) {    // Inserts node after val is encountered

    if (start == NULL) {    // checks if list is empty
        printf("\nList is empty!");
        return;
    }

    // declaration, memory allocation and initialization of new node
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = toInsert;

    // traversing pointer
    struct node *ptr = start;

    while (ptr->data != val) {    // traverse until val is encountered
        ptr = ptr->next;
    }

    if (ptr->next == NULL) {    // inserting after current last node
        // linking new node with current last node
        ptr->next = newNode;
        newNode->previous = ptr;
        newNode->next = NULL;
    } else {
        // linking nodes
        newNode->previous = ptr;
        newNode->next = ptr->next;
        ptr->next->previous = newNode;
        ptr->next = newNode;
    }

}

void insertAtPosition(int toInsert, int pos) {    // Inserts node at the given position

    if (start == NULL) {    // check if list is empty
        printf("\nList is empty!");
        return;
    }
    // declaration, memory allocation and initialization of new node
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = toInsert;

    // traversing pointer
    struct node *ptr = start;

    int count = 1;

    while (count != pos && ptr->next != NULL) {    // traverse list upto position
        ptr = ptr->next;
        count++;
    }

    if (pos > count+1) {    // invalid position
        printf("\nList is not that long!");
        return;
    }

    if (count == 1) {    // inserting at first position
        // linking new node with current first node
        newNode->next = ptr;
        newNode->previous = NULL;
        ptr->previous = newNode;
        // shifting start
        start = newNode;
    } else if (ptr->next == NULL && count < pos) {    // inserting at last position
        // linking new node with current last node
        ptr->next = newNode;
        newNode->previous = ptr;
        newNode->next = NULL;
    } else {    // inserting at any position
        newNode->next = ptr;
        newNode->previous = ptr->previous;
        ptr->previous->next = newNode;
        ptr->previous = newNode;
    }

}

int countNodes() {    // Counts number of nodes in the list

    if (start == NULL) {    // if the list is empty
        return 0;
    }
    // traversing pointer
    struct node *ptr = start;
    int count = 1;

    // traversing
    while (ptr->next != NULL) {
        ptr = ptr->next;
        count++;
    }
    return count;

}

void display() {    // Displays elements of the list

    if (start == NULL) {    // check if list is empty
        printf("\nList is empty!");
        return;
    }
    // traversing pointer
    struct node *ptr = start;

    printf("FORWARD  : ");
    while (ptr->next != NULL) {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);

    // displaying in reverse order
    printf("\nREVERSE :  ");
    while (ptr->previous != NULL) {
        printf("%d  ", ptr->data);
        ptr = ptr->previous;
    }
    printf("%d", ptr->data);
}


int main() {

    insertAtEnd(5);
    insertAtEnd(10);
    insertAtEnd(15);
    insertAtEnd(20);
    insertAtEnd(25);
    insertAtPosition(1000, 1);

    display();
}
