class Solution:
    def numSquares(self, n: int) -> int:
        if n<4:
            return n
        dp = [sys.maxsize]*(n+1)
        dp[0] = 0
        dp[1] = 1
        dp[2] = 2
        dp[3] = 3
        for i in range(4,n+1):
            for j in range(1,int(sqrt(n))+1):
                if i>=j*j:
                    dp[i] = min(dp[i],1+dp[i-j*j])
        return dp[n]
