class Solution:
    def getMoneyAmount(self, n: int) -> int:
        arr = [[0 for x in range(n+1)] for y in range(n+1)] 
        def helper(arr, l, r):
            if l >= r:
                return 0
            if arr[l][r]!=0:
                return arr[l][r]
            res = sys.maxsize
            for i in range(l,r+1):
                res = min(res, i + max(helper(arr, l, i-1), helper(arr, i+1, r)))
            arr[l][r] = res
            return res
        res = helper(arr, 1, n)
        return res
    
