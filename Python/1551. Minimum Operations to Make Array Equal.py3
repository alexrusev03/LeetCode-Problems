class Solution:
    def minOperations(self, n: int) -> int:
        res=0
        for j in range(n//2):
            res+=n-2*j-1
        return res
