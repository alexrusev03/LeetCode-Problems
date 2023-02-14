class Solution:
    def findSmallestSetOfVertices(self, n: int, edges: List[List[int]]) -> List[int]:
        ans=[]
        check=[0]*n
        for e in edges:
            check[e[1]]=1
        
        for i in range(n):
            if check[i] == 0:
                ans.append(i)
            
        return ans
