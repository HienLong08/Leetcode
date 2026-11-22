int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    int Sum = 0;
    int Dem = 0;

    for (int i = 0; i < k; i++){
        Sum += arr[i];
    }

    if ((double)Sum / k >= threshold){
        Dem++;
    }

    for (int i = 0; i < arrSize - k; i++){
        Sum -= arr[i];
        Sum += arr[i + k];

        if ((double)Sum / k >= threshold){
            Dem++;
        }
    }

    return Dem;
}

//Runtime: 0ms - Beats 100.00%
//Memory 14.16MB - Beats 94.97%