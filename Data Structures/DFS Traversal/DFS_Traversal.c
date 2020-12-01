#include <stdio.h>
#include <stdlib.h>
#define MAX 50  //Max size of stack

int popped;
int stack[MAX]; //Defining stack
int vertex = 6;
int adjacencyMatrix[20][20] = { 
    {0, 1, 1, 1, 0, 0}, 
    {1, 0, 0, 1, 1, 0}, 
    {1, 0, 0, 1, 0, 1}, 
    {1, 1, 1, 0, 1, 1}, 
    {0, 1, 0, 1, 0, 1},
    {0, 0, 1, 1, 1, 0}
};
int adjacencyMatrix[20][20] = {
    {0, 1, 1, 1, 0},
    {1, 0, 1, 0, 0},
    {1, 1, 0, 0, 1},
    {1, 0, 0, 0, 0},
    {0, 0, 1, 0, 0}
};

int top = -1;
int visited[10]; // for printing and preventing repetition
int deleted;
int indexVisited = 0;    // index of visited array

void push(int elem) {
    top++;
    stack[top] = elem;
}

void pop(int *popped) {
    *popped = stack[top];
    top--;
}

int isPresentVisited(int num) {    // check presence of number in visited
    int i;
    for (i = 0; i < indexVisited ; i++) {
        if (visited[i] == num) {
            return 1;
        }
    }
    return 0;
}

void dfs(int start, int vertex) {
    push(start);
    visited[indexVisited++] = start;

    while (top>=0) {
        for (int i = 0; i < vertex; i++) {
            if (adjacencyMatrix[stack[top]][i] && !isPresentVisited(i)) {
                visited[indexVisited++] = i;
                push(i);
                break;
            }
            if (i == vertex-1) {
                pop(&popped);
            }
        }
    }
}

int main() {

    dfs(2, vertex);
    for (int i = 0; i < vertex; i++) {
        printf("%d\t", visited[i]);
    }

}
