#include <stdlib.h>

int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {

    int* Ds = malloc(numsSize * sizeof(int));
    int Dem = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            Ds[Dem] = nums[i];
            Dem++;
        }
    }

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 1) {
            Ds[Dem] = nums[i];
            Dem++;
        }
    }

    *returnSize = numsSize;

    return Ds;
}

#Runtime: 0ms - Beats 100.00%
#Memory: 14.36MB - Beats 57.32%