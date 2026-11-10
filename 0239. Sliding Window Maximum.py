from collections import deque

class Solution:
    def maxSlidingWindow(self, nums: list[int], k: int) -> list[int]:
        Ds = []
        Q = deque()

        for i in range(len(nums)):
            if Q and Q[0] <= i - k:
                Q.popleft()

            while Q and nums[Q[-1]] <= nums[i]:
                Q.pop()

            Q.append(i)

            if i >= k - 1:
                Ds.append(nums[Q[0]])

        return Ds

#Runtime: 183ms - Beats: 69.60%
#Memory: 34.48MB - Beats: 95.64%
