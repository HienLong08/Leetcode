#include <stdlib.h>

int sort(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int Absolute(int u) {
    if (u >= 0) {
        return u;
    }
    else {
        return -u;
    }
}

int threeSumClosest(int* nums, int numsSize, int target) {
    int Start;
    int End;
    int Min = 99999;
    int Check;
    int Ans;

    qsort(nums, numsSize, sizeof(int), sort);

    Ans = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < numsSize - 2; i++) {
        Start = i + 1;
        End = numsSize - 1;

        while (Start < End) {
            Check = nums[i] + nums[Start] + nums[End];

            if (Absolute(target - Check) < Min) {
                Min = Absolute(target - Check);
                Ans = Check;
            }

            if (Check > target) {
                End--;
            }
            else if (Check < target) {
                Start++;
            }
            else {
                Ans = Check;
                return Ans;
            }
        }
    }

    return Ans;
}
//Runtime: 13ms - Beats 75.23%
//Memory: 9.00MB - Beats 38.09%