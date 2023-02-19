class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        res=0
        for i in range(0,len(grid)):
            for j in range(0,len(grid[0])):
                if grid[i][j]=='0' or grid[i][j]=='2':
                    continue
                
                else:
                    res+=1
                    self.helper(grid,i,j+1)
                    self.helper(grid,i,j-1)
                    self.helper(grid,i-1,j)
                    self.helper(grid,i+1,j)
                
        return res
    
    def helper(self, grid: List[List[str]],i: int,j: int)->int:
        if i<0 or j<0 or i>=len(grid) or j>=len(grid[0]):
            return
        
        if grid[i][j]=='0' or grid[i][j]=='2':
            return
        
        if grid[i][j]=='1':
            grid[i][j]='2'
            self.helper(grid,i,j+1)
            self.helper(grid,i,j-1)
            self.helper(grid,i-1,j)
            self.helper(grid,i+1,j)
