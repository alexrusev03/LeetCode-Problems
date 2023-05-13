class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 0:
            return 0
        nums.sort()
        curr = 1
        maxs = 0
        for i in range(n-1):
            if nums[i+1] != nums[i]:
                if nums[i+1] == nums[i] + 1:
                    curr+=1
                else:
                    maxs = max(maxs, curr)
                    curr = 1
        return max(maxs, curr)
