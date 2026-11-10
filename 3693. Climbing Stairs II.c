#include <stdlib.h>

int Min(int a, int b, int c){
    int Min = a;

    if(b < Min){
        Min = b;
    }

    if(c < Min){
        Min = c;
    }

    return Min;
}

int climbStairs(int n, int* costs, int costsSize) {
    int *Ds = malloc(sizeof(int) * (n + 1));
    Ds[0] = 0;

    if(n >= 1){
        Ds[1] = Ds[0] + costs[0] + 1;
    }

    if(n >= 2){
        Ds[2] = Min(
            Ds[0] + costs[1] + 4,
            Ds[1] + costs[1] + 1,
            10000000000000
        );
    }

    if(n >= 3){
        Ds[3] = Min(
            Ds[0] + costs[2] + 9,
            Ds[1] + costs[2] + 4,
            Ds[2] + costs[2] + 1
        );
    }

    for(int i = 4; i <= n; i++){
        Ds[i] = Min(
            Ds[i-1] + costs[i-1] + 1,
            Ds[i-2] + costs[i-1] + 4,
            Ds[i-3] + costs[i-1] + 9
        );
    }

    int Result = Ds[n];
    return Result;
}

#Runtime: 12ms - Beats 75.00%
#Memory: 27.81MB - Beats 20.00%