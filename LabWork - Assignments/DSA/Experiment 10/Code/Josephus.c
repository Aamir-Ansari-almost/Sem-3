#include <stdio.h>
#include <stdlib.h>
// Josephus problem using circular linked list
struct node {
    int id;
    struct node *next;
};

struct node *start, *ptr, *newNode;

int main() {
    int i, n, k, count;
    printf("Enter the number of player :  ");
    scanf("%d", &n);
    printf("Enter value of k :  ");
    scanf("%d", &k);

    start = malloc(sizeof(struct node));
    start->id = 1;
    ptr = start;
    // creating list of size n
    for (i = 2 ; i <= n ; i++) {
        newNode = malloc(sizeof(struct node));
        ptr->next = newNode;
        newNode->id = i;
        newNode->next = start;
        ptr = newNode;
    }
    // traversing the list and deleting every kth node
    for (count = n ; count>1 ; count--) {

        for (i = 0 ; i < k-1 ; i++) {
            ptr = ptr->next;
        }
        ptr->next = ptr->next->next;
    }
    printf("\nW I N N E R :  %d", ptr->id);
}

