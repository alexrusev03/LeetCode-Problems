class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if self.helper(s,t,len(s),len(t))!=False:
            return True
        
        return False
    
    def helper(self, s: str, t: str, i: int, j: int):
        if i == 0:
            return True
        
        if j == 0:
            return False
        
        if s[i-1] == t[j-1]:
            return self.helper(s,t,i-1,j-1)
        
        return self.helper(s,t,i,j-1)
