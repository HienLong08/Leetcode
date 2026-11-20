#include <stdio.h>
#include <stdbool.h>

#define MAX 200000

int Top = -1;
int Stack[MAX];

void Push(int u) {
    if (Top == MAX - 1) return;
    Stack[++Top] = u;
}

int Pop() {
    if (Top == -1) return -1;
    return Stack[Top--];
}

bool canVisitAllRooms(int** rooms, int roomsSize, int* roomsColSize) {
    bool Visited[MAX];

    for (int i = 0; i < roomsSize; i++) {
        Visited[i] = false;
    }

    Top = -1;
    Visited[0] = true;
    Push(0);

    while (Top != -1) {
        int u = Pop();

        for (int i = 0; i < roomsColSize[u]; i++) {
            int v = rooms[u][i];

            if (Visited[v] == false) {
                Visited[v] = true;
                Push(v);
            }
        }
    }

    for (int i = 0; i < roomsSize; i++) {
        if (Visited[i] == false) {
            return false;
        }
    }

    return true;
}

#Runtime: 0ms - Beats 100.00%
#Memory: 10.77MB - Beats 32.76%