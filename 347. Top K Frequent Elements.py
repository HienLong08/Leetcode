class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        List = {}
        DS = []
        i = 0
        for j in nums:
            if i not in List:
                List[j] = 1
            else:
                List[j] += 1
        Ds = sorted(List.items(), key=lambda x: x[1], reverse=True)
        while i <= k:
            DS.append(Ds[i][0])
            i += 1
        return DS