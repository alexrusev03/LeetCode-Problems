class Solution:
    def maxRotateFunction(self, nums: List[int]) -> int:
        res = -sys.maxsize
        n = len(nums)
        sum = 0
        f = 0
        for i in range(n):
            f += i*nums[i]
            sum += nums[i]
        for i in range(1,n+1):
            f = f + sum - n*nums[n-i]
            res = max(res, f)
        return res
