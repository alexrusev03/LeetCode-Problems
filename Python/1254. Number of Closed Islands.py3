class Solution:
    def closedIsland(self, grid: List[List[int]]) -> int:
        m=len(grid)
        n=len(grid[0])
        res=0
        for i in range(1,m-1):
            for j in range(1,n-1):
                if grid[i][j] == 0 and self.solve(i, j, m, n, grid)==True:
                    res+=1
        return res
    def solve(self, i: int, j: int, m: int, n: int, grid: List[List[int]]):
        if grid[i][j]==1:
            return True
        if i==0 or j==0 or i==m-1 or j==n-1:
            return False
        grid[i][j]=1
        l = self.solve(i, j - 1, m, n, grid)
        r = self.solve(i, j + 1, m, n, grid)
        u = self.solve(i - 1, j, m, n, grid)
        d = self.solve(i + 1, j, m, n, grid)
        return l and r and u and d
