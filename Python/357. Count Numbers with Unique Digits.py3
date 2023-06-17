class Solution:
    def countNumbersWithUniqueDigits(self, n: int) -> int:
        if n==0:
            return 1
        arr = [0]*n
        arr[0]=10
        p=9
        temp=9
        for i in range(1,n):
            p*=temp
            arr[i]=arr[i-1]+p
            temp-=1
        return arr[n-1]
