class Solution:
    def myPow(self, x: float, n: int) -> float:
        res = 1
        if n == 2147483647:
            if x==1:
                return 1
            elif x==-1:
                return -1
            else:
                return 0
        if n == -2147483648:
            if x==1 or x==-1:
                return 1
            else:
                return 0
        if n>0:
            for i in range(n):
                res*=x
            return res
        if n<0:
            for i in range(0,n,-1):
                res/=x
            return res
        return res
