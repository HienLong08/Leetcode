class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        Ds = {}

        for i in s:
            if i not in Ds:
                Ds[i] = 1
            else:
                Ds[i] += 1

        for i in t:
            if i not in Ds:
                return False
            else:
                Ds[i] -= 1

        for j in Ds.values():
            if j != 0:
                return False

        return True