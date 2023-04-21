class Solution:
    def addBinary(self, a: str, b: str) -> str:
        res=""
        c = 0
        i = len(a) - 1
        j = len(b) - 1
        while i >= 0 or j >= 0 or c==1:
            if i >= 0:
                c += int(a[i])
                i-=1
            if j >= 0:
                c += int(b[j])
                j-=1
            res+=str(c % 2)
            c //= 2
        return res[::-1]
