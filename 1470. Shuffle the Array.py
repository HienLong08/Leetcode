class Solution:
    def shuffle(self, nums: list[int], n: int) -> list[int]:
        Ds = []

        for i in range(n):
            Ds.append(nums[i])
            Ds.append(nums[i + n])

        return Ds