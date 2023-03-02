class Solution:
    def maximalSquare(self, matrix: List[List[str]]) -> int:
        a=0
        m=len(matrix)+1
        n=len(matrix[0])+1
        dp = [[0]*n for _ in range(m)]
        for i in range(1,m):
            for j in range(1,n):
                if matrix[i-1][j-1] == '1':
                    dp[i][j] = min(min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]) + 1
                    a = max(a, dp[i][j])

        return a*a
