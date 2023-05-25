class Solution:
    def countPrimes(self, n: int) -> int:
        res = 0
        if n == 0 or n == 1:
            return res
        arr=[0]*(n+1)
        arr[0], arr[1] = 1, 1
        for i in range(2, int(n**0.5)+1):
            if arr[i]==0:
                for j in range(i*i, n, i):
                    arr[j]=1
        for i in range(2,n):
            if arr[i]==0:
                res+=1
        return res
