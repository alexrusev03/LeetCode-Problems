class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        curMax = 0
        maxTillNow = float('-inf')
        for c in nums:
            curMax = max(c, curMax + c)
            maxTillNow = max(maxTillNow, curMax)
        return maxTillNow
