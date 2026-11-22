double findMaxAverage(int* nums, int numsSize, int k) {
    int Sum = 0;
    int Max;

    for (int i = 0; i < k; i++){
        Sum += nums[i];
    }

    Max = Sum;

    for (int i = 0; i < numsSize - k; i++){
        Sum -= nums[i];
        Sum += nums[i + k];

        if (Sum > Max){
            Max = Sum;
        }
    }

    return (double)Max / k;
}

//Runtime: 1ms - Beats 62.71%
//Memory 16.90MB - Beats 78.60%