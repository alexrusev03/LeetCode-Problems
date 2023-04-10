class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        if dividend==-2147483648 and divisor==-1:
            return 2147483647
        if dividend==-sys.maxsize and divisor==1:
            return -sys.maxsize
        sign=1
        if (dividend>0 and divisor<0) or (dividend<0 and divisor>0):
            sign = -1
        dd = abs(dividend)
        dvsr = abs(divisor)
        res=0
        while dvsr<=dd:
            mul=1
            temp=dvsr
            while temp<=dd-temp:
                mul+=mul
                temp+=temp
            res+=mul
            dd-=temp
        return sign*res
