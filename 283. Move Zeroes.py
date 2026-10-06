class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        Ds = []
        List = []

        for i in nums:
            if i == 0:
                Ds.append(i)
            else:
                List.append(i)

        nums[:] = List + Ds
        
#Runtime: 3ms - Beats 82.24%
#Memory: 20.39MB - Beats 90.18%
