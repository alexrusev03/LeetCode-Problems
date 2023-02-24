class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        temp=[]
        res= []
        vis=len(graph)-1
        self.solve(graph,0,res,temp,vis)
        return res
    def solve(self, graph: List[List[int]],n: int,res: List[List[int]],temp: List[int],vis: int):
        temp.append(n)
        for j in graph[n]:
            if j==vis:
                temp.append(vis)
                res.append(temp.copy())
                temp.pop()
                continue
               
            self.solve(graph,j,res,temp,vis);        
            temp.pop()
