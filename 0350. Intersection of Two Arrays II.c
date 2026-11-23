#include <stdlib.h>

int MinValue(int a, int b){
    if(a <= b) {
        return a;
    }

    return b;
}

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int Hash1[1001] = {0};
    int Hash2[1001] = {0};
    int* Ds = malloc(sizeof(int) * 1000);
    int CurrentIndex = 0;

    for (int i = 0; i < nums1Size; i++){
        Hash1[nums1[i]]++;
    }

    for (int j = 0; j < nums2Size; j++){
        Hash2[nums2[j]]++;
    }

    for (int i = 0; i < 1001; i++){
        if (Hash1[i] != 0 && Hash2[i] != 0){
            for (int j = 0; j < MinValue(Hash1[i], Hash2[i]); j++){
                Ds[CurrentIndex] = i;
                CurrentIndex++;
            }
        }
    }

    *returnSize = CurrentIndex;

    return Ds;
}

//Runtime: 1ms - Beats 53.83%
//Memory 11.66MB - Beats 5.48%