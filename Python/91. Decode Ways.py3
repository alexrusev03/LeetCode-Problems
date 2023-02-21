class Solution:
    def numDecodings(self, s: str) -> int:
        dp=[-1]*101
        return self.helper(0, s, dp)

    def helper(self, i: int, s: str, dp: []):
        n = len(s)
        if i >= n:
            return 1
        if dp[i] != -1:
            return dp[i]
        res = 0
        t1 = int(s[i])
        t2 = 0
        if i < n - 1:
            t2 = t1 * 10 + int(s[i+1])
        
        if t1 >=1:
            res+= self.helper(i + 1, s, dp)
        if t1 >= 1 and t2 >= 1 and t2 <= 26:
            res+= self.helper(i + 2, s, dp)
        dp[i] = res
        return dp[i]
