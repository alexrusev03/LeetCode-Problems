class Solution:
    def countSubstrings(self, s: str) -> int:
        res = 0
        n = len(s)
        for i in range(n):
            j = i
            k = i
            while j>=0 and k<n and s[j] == s[k]:
                j-=1
                k+=1
                res+=1
            j = i
            k = i+1
            while j>=0 and k<n and s[j] == s[k]:
                j-=1
                k+=1
                res+=1
        return res
