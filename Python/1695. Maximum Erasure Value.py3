class Solution:
    def maximumUniqueSubarray(self, nums: List[int]) -> int:
        res = 0
        curr = 0
        j = 0
        dict = {}
        for i in range(len(nums)):
            if nums[i] not in dict:
                dict[nums[i]] = 1
            else:
                dict[nums[i]]+=1
            curr += nums[i]
            while dict[nums[i]] > 1:
                curr -= nums[j]
                dict[nums[j]]-=1
                j+=1
            res = max(res, curr)
        return res
