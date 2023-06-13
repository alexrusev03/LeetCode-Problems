class Solution:
    def minMoves(self, nums: List[int]) -> int:
        res = 0
        m = sys.maxsize
        for i in range(len(nums)):
            m = min(m,nums[i])
        for i in range(len(nums)):
            res+=nums[i]-m
        return res
