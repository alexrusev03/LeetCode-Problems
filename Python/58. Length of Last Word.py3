class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        count = 0
        n = len(s) - 1
        while n >= 0 and s[n] == ' ':
            n-=1
        for j in range(n,-1,-1):
            if s[j]==' ':
                return count
            count+=1
        return count
