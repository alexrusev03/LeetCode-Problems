class Solution:
    def numRollsToTarget(self, n: int, k: int, target: int) -> int:
        dp = [[0 for x in range(target+1)] for y in range(n+1)] 
        dp[0][0] = 1
        for i in range(1,n+1):
            for j in range(1, k+1):
                for l in range(j,target+1):
                    dp[i][l] = (dp[i][l] + dp[i-1][l-j]) % 1000000007
        return dp[n][target]
