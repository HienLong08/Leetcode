#include <stdbool.h>
#include <stdlib.h>

int SoSanh(const void *a, const void *b){
    int A = *(const int *)a;
    int B = *(const int *)b;

    if (A < B) return -1;
    if (A > B) return 1;
    return 0;
}

bool uniqueOccurrences(int* arr, int arrSize) {
    qsort(arr, arrSize, sizeof(int), SoSanh);

    int *Ds = malloc(sizeof(int) * arrSize);
    int Dem = 0;

    for (int i = 0; i < arrSize; ){
        int j = i;

        while (j < arrSize && arr[j] == arr[i]){
            j++;
        }

        Ds[Dem] = j - i;
        Dem++;

        i = j;
    }

    qsort(Ds, Dem, sizeof(int), SoSanh);

    for (int i = 1; i < Dem; i++){
        if (Ds[i] == Ds[i - 1]){
            free(Ds);
            return false;
        }
    }

    free(Ds);
    return true;
}

#Runtime: 0ms - Beats 100.00%
#Memort: 8.79MB - Beats 95.79%