class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        j=0
        m=0
        res=0
        map={}
        for i in range(len(s)):
            map[s[i]]=map.get(s[i], 0)+1
            m=max(m,map[s[i]])
            if i-j+1-m>k:
                map[s[j]]-=1
                j+=1
            res=max(res, i-j+1)
        return res
