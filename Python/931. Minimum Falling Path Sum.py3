class Solution:
    def minFallingPathSum(self, matrix: List[List[int]]) -> int:
        n = len(matrix)
        l = 0
        r = 0
        for i in range(1,n):
            for j in range(n):
                if j==0:
                    l = float('inf')
                    r=matrix[i-1][j+1]
                
                elif j==n-1:
                    r = float('inf')
                    l=matrix[i-1][j-1]
                
                else:
                    r=matrix[i-1][j+1]
                    l=matrix[i-1][j-1]
                
                matrix[i][j]=matrix[i][j]+min(matrix[i-1][j], min(l, r))

        res = float('inf')
        for j in range(n):
            res = min(res, matrix[n-1][j])
    
        return res
