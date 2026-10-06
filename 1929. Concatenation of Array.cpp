class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> Ds;

        for (int i : nums) {
            Ds.push_back(i);
        }

        for (int i : nums) {
            Ds.push_back(i);
        }

        return Ds;
    }
};

#Runtime: 0ms - Beats 100%
#Memory: 17.18MB - Beats 15.83%