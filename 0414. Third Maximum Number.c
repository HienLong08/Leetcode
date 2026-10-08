#include <stdlib.h>

int compare(const void *a, const void *b) {
    int A = *(int*)a;
    int B = *(int*)b;

    if (A < B) {
        return -1;
    }

    if (A > B) {
        return 1;
    }

    return 0;
}

int thirdMax(int* nums, int numsSize) {
    int Ds[numsSize];
    int Dem = 0;

    for (int i = 0; i < numsSize; i++) {
        int Co = 0;

        for (int j = 0; j < Dem; j++) {
            if (Ds[j] == nums[i]) {
                Co = 1;
                break;
            }
        }

        if (Co == 0) {
            Ds[Dem] = nums[i];
            Dem++;
        }
    }

    qsort(Ds, Dem, sizeof(int), compare);

    if (Dem < 3) {
        return Ds[Dem - 1];
    }

    return Ds[Dem - 3];
}

#Runtime: 127ms - Beats 11.91%
#Memory: 9.12MB - Beats 47.05%