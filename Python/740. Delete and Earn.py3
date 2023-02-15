class Solution:
    def deleteAndEarn(self, nums: List[int]) -> int:
        n = 10001
        sum = [0]*n
        arr = [0]*n
        for i in nums:
            sum[i] += i
        
        arr[0] = 0
        arr[1] = sum[1]
        for i in range(2,n):
            arr[i] = max(arr[i-2] + sum[i], arr[i-1])
    
        return arr[n-1]
