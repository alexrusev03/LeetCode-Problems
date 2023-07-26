class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        n = len(nums)
        i = 0
        j = 0
        count = 0
        res = 0
        while j<n:
            if nums[j] == 0:
                count+=1
            while count > 1:
                if nums[i] == 0:
                    count-=1
                i+=1
            res = max(res, j - i)
            j+=1
        return res
