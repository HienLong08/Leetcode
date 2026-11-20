#include <stdio.h>
#include <stdbool.h>

#define MAX 200000

int Stack[MAX];
int Top = -1;

void Push(int u) {
    if (Top == MAX - 1) return;
    Stack[++Top] = u;
}

int Pop() {
    if (Top == -1) return -1;
    return Stack[Top--];
}

int findCircleNum(int** isConnected, int isConnectedSize, int* isConnectedColSize) {
    int n = isConnectedSize;
    int Dem = 0;

    bool Visited[n];

    for (int i = 0; i < n; i++) {
        Visited[i] = false;
    }

    for (int i = 0; i < n; i++) {

        if (Visited[i] == false) {
            Dem++;

            Top = -1;
            Push(i);
            Visited[i] = true;

            while (Top != -1) {
                int u = Pop();

                for (int v = 0; v < isConnectedColSize[u]; v++) {

                    if (isConnected[u][v] == 1 && Visited[v] == false) {
                        Visited[v] = true;
                        Push(v);
                    }

                }
            }
        }
    }

    return Dem;
}

#Runtime: 1ms - Beats 26.32%
#Memory: 11.96MB - Beats 87.37%