class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> Ds(nums.size());

        Ds[0] = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            Ds[i] = Ds[i - 1] + nums[i];
        }

        return Ds;
    }
};

#Runtime: 0ms - Beats 100%
#Memory: 12.72MB - Beats 12.93%