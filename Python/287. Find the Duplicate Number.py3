class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        l = 1
        r = len(nums) - 1
        c = 0
        while l <= r:
            m = int((r + l) / 2)
            c = 0
            for i in range(len(nums)):
                if nums[i] <= m:
                    c+=1
            if c > m:
                r = m - 1
            else:
                l = m + 1
        return l
