class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        Ds = set(nums)
        if len(Ds) != len(nums):
            return True
        return False