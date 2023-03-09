class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        n=len(coins)
        dp=[[0 for i in range(amount+1)] for i in range(n+1)]
        for i in range(amount+1):
            dp[0][i] = float('inf')-1
        
        for i in range(1,amount+1):
            if i%coins[0]==0:
                dp[1][i] = int(i/coins[0])
            
            else:
                dp[1][i] = float('inf')-1
            
        for i in range(2,n+1):
            for j in range(1,amount+1):
                if coins[i-1]<=j:
                    dp[i][j] = min(dp[i][j-coins[i-1]]+1,dp[i-1][j])
                
                else:
                    dp[i][j] = dp[i-1][j]

        if dp[n][amount]==float('inf')-1:
            return -1
        
        else:
            return dp[n][amount];
