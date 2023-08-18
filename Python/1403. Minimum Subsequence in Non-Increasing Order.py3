class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        n=len(nums)
        rest=0
        sum=0
        res=[]
        nums.sort()
        for i in range(n):
            rest+=nums[i]
        for j in range(n-1,-1,-1):
            sum+=nums[j]
            rest-=nums[j]
            res.append(nums[j])
            if sum>rest:
                break
        return res
