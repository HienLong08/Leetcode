class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        Set = set(nums)
        Max = 0

        for i in Set:
            if i - 1 not in Set:
                Dem = 1
                while i + Dem in Set:
                    Dem += 1

                Max = max(Max, Dem)

        return Max
