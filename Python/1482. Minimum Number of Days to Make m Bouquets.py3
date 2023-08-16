class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        n = len(bloomDay)
        if m*k>n:
            return -1
        l = 1
        r = 1e9
        while l<r:
            mid = int((l + r)/2)
            f = 0
            b = 0
            for j in range(n):
                if bloomDay[j]>mid:
                    f = 0
                if bloomDay[j]<=mid:
                    f+=1
                if f == k:
                    b+=1
                    f = 0
            if b<m:
                l = mid + 1
            else:
                r = mid
        return l
