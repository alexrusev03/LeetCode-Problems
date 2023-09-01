class Solution:
    def reinitializePermutation(self, n: int) -> int:
        res = 1
        i = int(n/2)
        while i > 1:
            if i%2==0:
                i /= 2
            else:
                i = n/2+(i-1)/2
            res+=1
        return res
