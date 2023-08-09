class Solution:
    def minFallingPathSum(self, grid: List[List[int]]) -> int:
        n = len(grid)
        arr = [[0 for x in range(n)] for y in range(n)] 
        for i in range(n):
            arr[0][i]=grid[0][i]
        res=sys.maxsize
        for i in range(1,n):
            for j in range(n):
                temp=sys.maxsize
                for k in range(n):
                    if k==j:
                        continue
                    temp=min(temp,grid[i][j]+arr[i-1][k])
                arr[i][j]=temp
        for i in arr[n-1]:
            res=min(res,i)
        return res
