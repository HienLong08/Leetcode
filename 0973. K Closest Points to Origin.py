class Solution:
    def kClosest(self, points: list[list[int]], k: int) -> list[list[int]]:
        points.sort(key=lambda x: x[0]**2 + x[1]**2)

        Ds = []
        i = 0

        for point in points:
            if i < k:
                Ds.append(point)
                i += 1

        return Ds
            