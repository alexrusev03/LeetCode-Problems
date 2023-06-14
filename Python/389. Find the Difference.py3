class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        n = len(t)
        m = len(s)
        s = sorted(s)
        t = sorted(t)
        i = 0
        while i<m:
            if s[i]!=t[i]:
                return t[i]
            i+=1
        return t[n-1]
