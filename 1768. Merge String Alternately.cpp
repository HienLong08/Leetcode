class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string Ds = "";
        int N = max(word1.size(), word2.size());

        for (int i = 0; i < N; i++) {
            if (i < word1.size()) {
                Ds.push_back(word1[i]);
            }
            if (i < word2.size()) {
                Ds.push_back(word2[i]);
            }
        }

        return Ds;
    }
};

#Runtime: 0ms - Beats 100.00%
#Memory: 8.36MB - Beats 84.08%
