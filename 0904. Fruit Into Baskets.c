int totalFruit(int* fruits, int fruitsSize) {
    int Dx[100001] = {0};

    int Left = 0;
    int Dem = 0;
    int Max = 0;

    for (int Right = 0; Right < fruitsSize; Right++) {

        if (Dx[fruits[Right]] == 0) {
            Dem++;
        }

        Dx[fruits[Right]]++;

        while (Dem > 2) {
            Dx[fruits[Left]]--;

            if (Dx[fruits[Left]] == 0) {
                Dem--;
            }

            Left++;
        }

        if (Right - Left + 1 > Max) {
            Max = Right - Left + 1;
        }
    }

    return Max;
}

//Runtime: 13ms - Beats 10.71%
//Memory 14.76MB - Beats 77.38%

