#include <stdlib.h>

int SoSanh(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x > y) return -1;
    if (x < y) return 1;
    return 0;
}

int minimumCost(int* cost, int costSize) {
    qsort(cost, costSize, sizeof(int), SoSanh);

    int total = 0;

    for (int i = 0; i < costSize; i++) {
        if ((i + 1) % 3 != 0) {
            total += cost[i];
        }
    }

    return total;
}

#Runtime: 1ms - Beats 37.80%
#Memory: 8.81MB - Beats 68.50%
