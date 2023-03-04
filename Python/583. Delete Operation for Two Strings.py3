class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        n1=len(word1)
        n2=len(word2)
        return n1+n2-2*self.helper(word1,word2)

    def helper(self, word1: str,word2: str):
        n1=len(word1)
        n2=len(word2)
        dp = [[0 for j in range(n2+1)] for i in range(n1+1)]
        for i in range(n1+1):
            for j in range(n2+1):
                if i==0 or j==0:
                    dp[i][j]=0
                
                elif word1[i-1]==word2[j-1]:
                    dp[i][j]=1+dp[i-1][j-1]
                
                else:
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1])
                
        return dp[n1][n2]
