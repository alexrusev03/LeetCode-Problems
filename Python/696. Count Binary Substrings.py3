class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        res=0
        temp=0
        c=1
        for i in range(len(s)-1):
            if s[i]==s[i+1]:
                c+=1
            else:
                res+=min(temp,c)
                temp=c
                c=1
        res+=min(temp,c)
        return res
