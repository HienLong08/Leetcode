int minSubArrayLen(int target, int* nums, int numsSize) {
    int Left = 0;
    int Min = numsSize + 1;
    int Sum = 0;

    for (int Right = 0; Right < numsSize; Right++) {

        Sum += nums[Right];

        while (Sum >= target) {

            if (Right - Left + 1 < Min) {
                Min = Right - Left + 1;
            }

            Sum -= nums[Left];
            Left++;
        }
    }
    if (Min == numsSize + 1){
        return 0;
    }
    return Min;
}

//Runtime: 0ms - Beats 100.00%
//Memory 13.76MB - Beats 83.37%