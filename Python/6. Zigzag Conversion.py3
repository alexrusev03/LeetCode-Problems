class Solution:
    def convert(self, s: str, numRows: int) -> str:
        n = len(s)
        if numRows==1:
            return s
        ans=""
        for i in range(numRows):
            j=i
            k=2*(numRows-1-i)
            while j<n:
                ans+=s[j]
                if i>0 and i<numRows-1 and j+k<n:
                    ans+=s[j+k]
                j+=2*(numRows-1)
        return ans
