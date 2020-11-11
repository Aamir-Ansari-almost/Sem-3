#include<stdio.h>
#include<stdlib.h>

// linked list
struct node {
    int data;   // marks
    int roll;   // roll number of student
    struct node *next;
};

struct node *start;

void insert(int val, int rollNumber) {
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->roll = rollNumber;

    if (start == NULL) {    // Entering first node
        start = newNode;    
        start->next = NULL;
        return;
    } else {    // inserting node at end
        struct node *ptr;
        ptr = start;

        while (ptr->next != NULL) {    // traverse upto the last node
            ptr = ptr->next;
        }
        ptr->next = newNode;
        newNode->next = NULL;
    }
}

void sort() {    // Sorts the list
    struct node *i = start;
    struct node *j = NULL;
    int tempData;
    int tempRoll;
    for (i = start ; i != NULL ;  i=i->next) {
        for (j = i->next ; j != NULL ; j = j->next) {
            if (i->data > j->data) {
                tempData = i->data;
                i->data = j->data;
                j->data = tempData;
                tempRoll = i->roll;
                i->roll = j->roll;
                j->roll = tempRoll;
            }
        }
    }
}

int main() {
    int i;
    printf("Enter number of students :  ");
    
}
