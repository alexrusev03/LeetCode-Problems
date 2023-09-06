class Solution:
    def maxAbsoluteSum(self, nums: List[int]) -> int:
        pos = -sys.maxsize
        curr = 0
        for i in range(len(nums)):
            curr += nums[i]
            if curr > pos:
                pos = curr
            if curr < 0:
                curr = 0
        curr = 0
        neg = sys.maxsize
        for i in range(len(nums)):
            curr += nums[i]
            if neg > curr:
                neg = curr
            if curr > 0:
                curr = 0
        return max(abs(pos), abs(neg))
