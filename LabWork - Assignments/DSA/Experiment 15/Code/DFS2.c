#include <stdio.h>
#include <stdlib.h>

int n;

void dfs(int adj[][n],int visited[],int start) {
    int stack[n];
    int top = -1, i;
    printf("%c->  ",start+65);
    visited[start] = 1;
    stack[++top] = start;
    while(top != -1) {
        start = stack[top];
        for(i = 0; i < n; i++) {
            if(adj[start][i] && visited[i] == 0) {
                stack[++top] = i;
                printf("%c->  ", i+65);
                visited[i] = 1;
                break;
            }
        }
        if (i == n) {
            top--;
        }
    }
}

int main() {
    int adj[10][10];
    int visited[20] = {0}, i, j;

    printf("Enter number of vertices :  ");
    scanf("%d", &n);

    printf("\nEnter the adjacency matrix: \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }
    printf("DFS Traversal :  ");
    dfs(adj,visited,0);
    return 0;
}
