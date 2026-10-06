class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        Ds = {}

        for i in nums:
            if i not in Ds:
                Ds[i] = 1
            else:
                Ds[i] += 1

        for i, Dem in Ds.items():
            if Dem > len(nums) / 2:
                return i
            
#Runtime: 15ms - Beat 27.21%
#Memory: 21.52MB - Beat 24.74%