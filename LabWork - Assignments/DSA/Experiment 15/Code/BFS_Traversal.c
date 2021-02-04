#include <stdio.h>
#include <stdlib.h>

int vertex = 5;
// int adjacencyMatrix[20][20] = { 
//     {0, 1, 1, 1, 0, 0}, 
//     {1, 0, 0, 1, 1, 0}, 
//     {1, 0, 0, 1, 0, 1}, 
//     {1, 1, 1, 0, 1, 1}, 
//     {0, 1, 0, 1, 0, 1},
//     {0, 0, 1, 1, 1, 0}
// };
int adjacencyMatrix[20][20] = {
    {0, 1, 1, 1, 0},
    {1, 0, 1, 0, 0},
    {1, 1, 0, 0, 1},
    {1, 0, 0, 0, 0},
    {0, 0, 1, 0, 0}
};
int queue[20], front = -1, rear = -1;    // for traversal
int visited[20];    // for printing and preventing repetition
int deleted;
int indexVisited = 0;    // index of visited array

// for queue
void insert(int item) {
    if (front == -1) {
        front++;
    }
    rear++;
    queue[rear] = item;
}

// for queue
void del(int* deleted) {
    if (front==-1 || front>rear) {
        return;
    }
    *deleted = queue[front];
    front++;
}

int isPresentVisited(int num) {
    int i;
    for (i = 0; i < indexVisited ; i++) {
        if (visited[i] == num) {
            return 1;
        }
    }
    return 0;
}

int isPresentQueue(int num) {    // check presence of number in queue
    for (int i = front; i <= rear; i++) {
        if (queue[i] == num) {
            return 1;
        }
    }
    return 0;
}

void bfs(int start, int vertex) {
    // initialization
    visited[indexVisited++] = start;
    int i = 0;
    while (i < vertex) {
        if (adjacencyMatrix[start][i] && !isPresentVisited(i)) {
            insert(i);
        }
        i++;
    }

    while (front <= rear) {
        del(&deleted);
        visited[indexVisited++] = deleted;
        for (i = 0; i < vertex; i++) {
            if (adjacencyMatrix[deleted][i] && !isPresentVisited(i) && !isPresentQueue(i)){
                insert(i);
            }
        }
        printf("\n");
    }
}

int main() {

    bfs(0, vertex);

    for (int i = 0; i < vertex; i++) {
        printf("%d\t", visited[i]);
    }
}
