class Solution:
    def smallerNumbersThanCurrent(self, nums: list[int]) -> list[int]:
        Ds = []
        Dem = 0
        for i in range(len(nums)):
            for j in range(len(nums)):
                if nums[j] < nums[i]:
                    Dem += 1
            Ds.append(Dem)
            Dem = 0
        return Ds
    
#Run time: 152ms - Beat 18,96%
#Memory: 19.15MB - Beat 90,19%