int longestOnes(int* nums, int numsSize, int k) {
    int Left = 0;
    int Max = 0;
    int Current = 0;

    for (int Right = 0; Right < numsSize; Right++) {

        if (nums[Right] == 0) {
            Current++;
        }

        while (Current > k) {

            if (nums[Left] == 0) {
                Current--;
            }

            Left++;
        }

        if (Right - Left + 1 > Max) {
            Max = Right - Left + 1;
        }
    }

    return Max;
}

//Runtime: 0ms - Beats 100.00%
//Memory 14.60MB - Beats 53.77%