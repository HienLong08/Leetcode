class Solution:
    def search(self, nums: list[int], target: int) -> int:
        Start = 0
        End = len(nums) - 1

        while Start <= End:
            Middle = (Start + End) // 2

            if nums[Middle] == target:
                return Middle

            if nums[Middle] < target:
                Start = Middle + 1

            if nums[Middle] > target:
                End = Middle - 1

        return -1