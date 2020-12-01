#include <stdio.h>
#include <stdlib.h>

int adjacancy[10][10];
int visited[20], n;

void dfs(int startVertex) {
    int i;
    visited[startVertex] = 1;
    for (i = 1; i <= n; i++) {
        if (adjacancy[startVertex][i] && !visited[i]) {
            printf("\n%d->%d", startVertex, i);
            dfs(i);
        }
    }
}

int main() {
    int i, j, top = 0;
    printf("Enter number of vertices :  ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {    // initialise
        visited[1] = 0;
        for (j = 1; j <= n; j++) {
            adjacancy[i][j] = 0;
        }
    }

    // input
    printf("\nEnter adjacancy matrix :  \n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &adjacancy[i][j]);
        }
    }

    dfs(1);
    printf("n");
    for (i = 1; i <= n; i++) {
        if (visited[i]) {
            top++;
        }
    }

    if (top == n) {
        printf("n Graph is connected");
    }
    else {
        printf("n Graph is not connected");
    }

}
