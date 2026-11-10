int mySqrt(int x) {
    if (x == 0) return 0;

    int Left = 1;
    int Right = x;

    while (Left <= Right) {
        int Mid = Left + (Right - Left) / 2;

        if (Mid <= x / Mid) {
            Left = Mid + 1;
        }
        else {
            Right = Mid - 1;
        }
    }

    return Right;
}

#Runtime: 1ms - Beats 45.64%
#Memory: 9.04MB - Beats 83.66%