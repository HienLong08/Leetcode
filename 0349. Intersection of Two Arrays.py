class Solution:
    def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
        Ds = []
        nums1.sort()
        nums2.sort()
        Ds1 = set(nums1)
        Ds2  =set(nums2)
        for i in Ds1:
            if i in Ds2:
                Ds.append(i)
        return Ds
        
#Runtime: 1ms - Beats 41.36%
#Memory: 19.40 MB Beats 45.50%