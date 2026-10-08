class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> Ds;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            int Left = i + 1;
            int Right = nums.size() - 1;

            while (Left < Right) {
                int Sum = nums[i] + nums[Left] + nums[Right];

                if (Sum < 0) {
                    Left++;
                }
                else if (Sum > 0) {
                    Right--;
                }
                else {
                    Ds.insert({nums[i], nums[Left], nums[Right]});
                    Left++;
                    Right--;
                }
            }
        }

        return vector<vector<int>>(Ds.begin(), Ds.end());
    }
};

#Runtime: 1289ms - Beats 5.01%
#Memory: 291.78MB - Beats 7.18%