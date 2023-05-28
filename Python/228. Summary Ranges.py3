class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        n = len(nums)
        i = 0
        j = 0
        res=[]
        while i<n and j<n:
            if j + 1 < n and nums[j + 1] == nums[j] + 1:
                j+=1
            else:
                if j > i:
                    res.append(str(nums[i]) + '->' + str(nums[j]))
                    i=j+1
                    j+=1
                else:
                    res.append(str(nums[i]))
                    i+=1
                    j+=1
        return res
