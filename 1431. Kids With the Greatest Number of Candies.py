class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        Ds = []
        Max = max(candies)
        
        for i in candies:
            if i + extraCandies >= Max:
                Ds.append(True)
            else:
                Ds.append(False)
                
        return Ds
    
#Runtime: 0ms - Beats 100.00%
#Memory: 19.38MB - Beats 24.78%