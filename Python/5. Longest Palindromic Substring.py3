class Solution:
    def longestPalindrome(self, s: str) -> str:
        n=len(s)
        leng=1
        begin=0
        for i in range(1,n+1):
            l=i-1
            r=i
            while l>=0 and r<n and s[l]==s[r]:
                if r-l+1>leng:
                    leng=r-l+1
                    begin=l
                l-=1
                r+=1
            l=i-1
            r=i+1
            while l>=0 and r<n and s[l]==s[r]:
                if r-l+1>leng:
                    leng=r-l+1
                    begin=l
                l-=1
                r+=1
        return s[begin:begin+leng]
