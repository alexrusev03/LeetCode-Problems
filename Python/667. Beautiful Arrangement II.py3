class Solution:
    def constructArray(self, n: int, k: int) -> List[int]:
        res=[0]*n
        r = 0
        d = k+1
        for i in range(k+1):
            if i%2==1:
                res[i]= d
                d-=1
            else:
                r+=1
                res[i] = r
        for i in range(k+1,n):
            res[i] = i+1
        return res
