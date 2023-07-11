class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        n = len(s)
        i = 0
        j = n
        res = [0]*(n+1)
        for k in range(n):
            if s[k]=='D':
                res[k] = j
                j-=1
            else:
                res[k] = i
                i+=1
        res[n] = j
        return res
