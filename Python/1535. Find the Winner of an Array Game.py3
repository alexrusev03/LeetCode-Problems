class Solution:
    def getWinner(self, arr: List[int], k: int) -> int:
        n = len(arr)
        c = 0
        max = 0
        res = arr[0]
        if k > n:
            for i in range(n):
                if arr[i]>max:
                    max=arr[i]
            return max
        for i in range(1,n):
            if c==k:
                break
            if arr[i] > res:
                res = arr[i]
                c = 0
            c+=1
        return res
