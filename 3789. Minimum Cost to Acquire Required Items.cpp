long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
    long long A = (long long)need1 * cost1
                + (long long)need2 * cost2;

    int maxNeed = need1 > need2 ? need1 : need2;
    long long B = (long long)maxNeed * costBoth;

    int m = need1 < need2 ? need1 : need2;

    long long C = (long long)m * costBoth
                + (long long)(need1 - m) * cost1
                + (long long)(need2 - m) * cost2;

    long long ans = A;

    if (B < ans) ans = B;
    if (C < ans) ans = C;

    return ans;
}

#Runtime: 2ms - Beats 100%
#Memory: 9.27MB - Beats 28.57%