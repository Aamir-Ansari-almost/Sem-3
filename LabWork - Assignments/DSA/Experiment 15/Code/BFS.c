#include <stdio.h>
#include <stdlib.h>

int adjacancy[10][10];
int queue[20], front = 0, rear = -1;
int visited[20];
int n, i, j;

void bfs(int startVertex) {
    for (i = 1; i <= n; i++) {
        if (adjacancy[startVertex][i] && !visited[i]) {
            queue[++rear] = i;
        }
    }
    if (front <= rear) {
        visited[queue[front]] = 1;
        bfs(queue[front++]);
    }
}

int main() {
    printf("Enter number of vertices :  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {    // intialisation
        queue[i] = 0;
        visited[i] = 0;
    }

    // input of adjacancy matrix
    printf("\nEnter adjacancy matrix :  \n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &adjacancy[i][j]);
        }
    }
    bfs(1);

    printf("\nBFS traversal is :  ");
    for (i = 1; i <= n; i++) {
        if (visited[i]) {
            printf("%d   ", i);
        }
        else {
            printf("\nEnetered graph is incorrect, since all nodes are not reachable!");
            break;
        }
    }
}
