#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int queue[MAX];
int front = -1, rear = -1, deleted;

void insert(int );
void del(int* );
void display();

int main() {
    int i, choice, item;

    while(1) {
        printf("\n* 1. INSERT ");
        printf("\n* 2. DELETE ");
        printf("\n* 3. DISPLAY ");
        printf("\n* 4. EXIT ");
        printf("\nEnter your choice :  ");
        scanf("%d", &item);

        switch(item) {
            case 1:
                printf("\nEnter element to insert :  ");
                scanf("%d", &item);
                insert(item);
                break;
            case 2:
                del(&deleted);
                printf("\nDeleted element is :  %d", deleted);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("****END****");
                exit(1);
            default:
                printf("\nInvalid input");
        }
    }
}

void insert(int item) {
    if (rear == MAX-1) {
        printf("\nQUEUE OVERFLOW");
        return;
    }
    if (front == -1) {
        front++;
    }
    rear++;
    queue[rear] = item;
}

void del(int* deleted) {
    if (front==-1 || front>rear) {
        printf("\nQUEUE UNDERFLOW");
        return;
    }
    *deleted = queue[front];
    front++;
}

void display() {
    int i;
    if (front==-1 || front> rear) {
        printf("\nQUEUE UNDERFLOW");
        return;
    }
    printf("Elements of queue are :  ");
    for (i=front ; i<=rear ; i++) {
        printf("%d, ", queue[i]);
    }
}
