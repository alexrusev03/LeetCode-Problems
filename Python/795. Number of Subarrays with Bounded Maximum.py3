class Solution:
    def numSubarrayBoundedMax(self, nums: List[int], left: int, right: int) -> int:
        res = 0
        l = -1
        r = -1
        for i in range(len(nums)):
            if nums[i] > right:
                l = i
            if nums[i] >= left:
                r = i
            res += r-l
        return res
