class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        res = 0
        ch = 0
        co = 0
        g.sort()
        s.sort()
        while ch < len(g) and co < len(s):
            if s[co] >= g[ch]:
                res+=1
                ch+=1
            co+=1
        return res
