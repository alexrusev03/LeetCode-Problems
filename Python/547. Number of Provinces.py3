class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n= len(isConnected)
        sol=0
        vis=[0]*n
        for i in range(n):
            if vis[i]==0:
                sol+=1
                self.dfs(isConnected, vis,i)
        
        return sol

    def dfs(self, isConnected: List[List[int]], vis: List[int],j: int) -> int:
        n= len(isConnected)
        vis[j]=1
        for i in range(n):
            if i!=j and vis[i]==0 and isConnected[i][j]==1:
                self.dfs(isConnected, vis, i)
