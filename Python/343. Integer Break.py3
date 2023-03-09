class Solution:
    def integerBreak(self, n: int) -> int:
        return self.helper(n-1,n)
    def helper(self, i: int,n: int):
        if i==0 or i==1:
            return 1
        num=0
        if n>=i:
            num=i*self.helper(i,n-i)
        return max(num,self.helper(i-1,n))
