class Solution:
    def checkRecord(self, s: str) -> bool:
        a = 0
        l = 0
        for i in range(len(s)):
            if s[i]=='L':
                l+=1
            elif s[i]=='A':
                l = 0
                a+=1
            else:
                l=0
            if l>=3:
                return False
        if a>=2:
            return False
        return True
