nt* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(numsSize * sizeof(int));
    int* Ds = calloc(numsSize + 1, sizeof(int));

    *returnSize = 0;

    for (int i = 0; i < numsSize; i++) {
        Ds[nums[i]]++;
    }

    for (int i = 1; i <= numsSize; i++) {
        if (Ds[i] == 2) {
            result[(*returnSize)++] = i;
        }
    }

    free(Ds);
    return result;
}

//Runtime: 2ms - Beats 50.47%
//Memory: 26.34MB - Beats 9.86%