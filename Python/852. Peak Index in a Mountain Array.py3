class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        l = 0
        r = len(arr)
        res = 0
        while l < r:
            m = int((r + l) / 2)
            if arr[m] < arr[m + 1]:
                l = m + 1
                res = m + 1
            elif arr[m] < arr[m - 1]:
                r = m - 1
                res = m - 1
            else:
                return m
        return res
