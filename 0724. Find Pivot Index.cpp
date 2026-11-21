int pivotIndex(int* nums, int numsSize) {
    int Tong = 0;

    for (int i = 0; i < numsSize; i++){
        Tong += nums[i];
    }

    int Sum = 0;

    for (int i = 0; i < numsSize; i++){
        if (Sum == Tong - Sum - nums[i]){
            return i;
        }

        Sum += nums[i];
    }

    return -1;
}

#Runtime: 1ms - Beats 28.81%
#Memory: 9.91MB - Beats 97.55%