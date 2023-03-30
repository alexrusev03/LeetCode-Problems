class Solution:
    def myAtoi(self, s: str) -> int:
        ans = 0
        idx=0
        sign=1
        s=s.strip()
        n = len(s)
        if idx < n and (s[idx] == '-' or s[idx] == '+'):
            sign = -1 if s[0] == '-' else 1
            idx+=1
        while idx < n and s[idx] >= '0' and s[idx] <= '9':
            ans = ans*10 + int(s[idx])
            idx+=1
        ans*=sign
        if ans>2**31 - 1:
            return 2**31 - 1
        if ans<-2**31:
            return -2**31
        return ans
