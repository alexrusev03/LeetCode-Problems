class Solution:
    def reverse(self, x: int) -> int:
        ans=0 
        if x >= 0:
            sgn=1
        else:
            sgn=-1
        x*=sgn
        while x>0:
            ans=ans*10+x%10
            x=int(x/10)
        if ans>=((2**31)-1) or ans<=-2**31:
            return 0
        ans*=sgn
        return ans
