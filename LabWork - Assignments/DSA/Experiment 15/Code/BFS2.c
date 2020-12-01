#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int n;

void bfs(int adj[][n],int visited[],int start) {
    int queue[10], rear = -1, front = -1, i;
    queue[++rear] = start;
    visited[start] = 1;
    printf("BFS Traversal :  ");
    while(rear != front) {
        start = queue[++front];
        if(start == 4) {
            printf("5\t");
        }
        else {
            printf("%c   ",start + 65);
        }
        for(i = 0; i < n; i++) {
            if(adj[start][i] == 1 && visited[i] == 0) {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int visited[MAX] = {0};
    int adj[MAX][MAX], i, j;
    printf("Enter number of vertices :  ");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix : \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }
    bfs(adj,visited,0);
    return 0;
}
