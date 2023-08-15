class Solution:
    def minimumDeletions(self, s: str) -> int:
        stk = []
        res=0
        for i in range(len(s)):
            if s[i] == 'a':
                if stk:
                    stk.pop()
                    res+=1
            else:
               stk.append(s[i])
        return res
