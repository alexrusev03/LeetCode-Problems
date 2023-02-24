class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        n=len(triangle)
        dp = [0]*n
        for i in range(n):
            dp[i]=triangle[n-1][i]
        
        for i in range(n-2,-1,-1):
            arr=[0]*n
            for j in range(i,-1,-1):
                arr[j]=min(triangle[i][j]+dp[j], triangle[i][j]+dp[j+1])
            
            dp=arr
    
        return dp[0]
