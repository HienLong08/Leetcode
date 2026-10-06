class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> Ds;

        for (int i = 0; i < nums.size(); i++) {
            Ds.push_back(nums[nums[i]]);
        }

        return Ds;
    }
};

#Runtime: 0ms - Beats 100.00%
#Memory: 20.68MB - Beats 39.73%