class Solution:
    def binaryGap(self, n: int) -> int:
        res = 0
        l = -1
        for i in range(32):
            if n & (1 << i)!=0:
                if l != -1:
                    res = max(res, i - l)
                l = i
        return res
