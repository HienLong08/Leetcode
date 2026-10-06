class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string Ds(s.size(), ' ');

        for (int i = 0; i < s.size(); i++) {
            Ds[indices[i]] = s[i];
        }

        return Ds;
    }
};

#Runtime: 0ms - Beats 100.00%
#Memory: 18.69MB - Beats 96.85%