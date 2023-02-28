class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res=[]
        self.helper(n,0,0,"",res)
        return res
    
    def helper(self, n: int, op: int, cl: int, p: str, res: List[str]):
        if len(p) == 2*n:
            res.append(p)
            return
        
        if op<n:
            self.helper(n,op+1,cl,p+"(",res)
        
        if cl<op:
            self.helper(n,op,cl+1,p+")",res)
