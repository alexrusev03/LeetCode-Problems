class Solution:
    def getSumAbsoluteDifferences(self, nums: List[int]) -> List[int]:
        n = len(nums)
        p = [0]*n
        res = [0]*n
        p[0] = nums[0]
        for i in range(1,n):
            p[i] = nums[i] + p[i - 1]
        res[0] = p[n - 1] - p[0] - (n - 1) * nums[0]
        for i in range(1,n):
            res[i] = p[n - 1] - p[i - 1] - p[i] - (n - 2*i - 1) * nums[i]
        return res
