class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        Dem = 0
        
        for i in stones:
            if i in jewels:
                Dem += 1
        
        return Dem
        
#Runtime: 0ms - Beats 100.00%
#Memory: 18.99MB - Beats 99.77%
