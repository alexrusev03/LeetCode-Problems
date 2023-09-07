class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        sum = nums[0]
        res = nums[0]
        for i in range(1, len(nums)):
            if nums[i] > nums[i-1]:
                sum += nums[i]
            else:
                res = max(res,sum)
                sum = nums[i]
        res = max(res,sum)
        return res
