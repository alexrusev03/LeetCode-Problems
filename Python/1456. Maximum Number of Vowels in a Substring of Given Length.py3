class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        i = 0
        res = 0
        for j in range(len(s)):
            if j<k-1:
                if s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u':
                    i+=1
            else:
                if s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u':
                    i+=1
                res = max(res,i)
                if s[j-k+1]=='a' or s[j-k+1]=='e' or s[j-k+1]=='i' or s[j-k+1]=='o' or s[j-k+1]=='u':
                    i-=1
        return res
