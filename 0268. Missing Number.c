#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int missingNumber(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);

    if (nums[0] != 0) {
        return 0;
    }

    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i + 1] != nums[i] + 1) {
            return nums[i] + 1;
        }
    }

    return numsSize;
}

#Runtime: 11ms - Beats 10.85%
#Memory: 10.13MB - Beats 5.36%