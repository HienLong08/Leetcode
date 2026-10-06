class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> Ds;

        for (int i = 0; i < n; i++) {
            Ds.push_back(start + 2 * i);
        }

        int Ans = 0;

        for (int i : Ds) {
            Ans = Ans ^ i;
        }

        return Ans;
    }
};

#Runtime 0ms - Beats 100%
#Memory 8.44MB - Beats 15.47%