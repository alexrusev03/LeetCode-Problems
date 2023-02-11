class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)
        if n==1:
            return nums[0]
        else:
            prev2 = nums[0]
            prev = max(prev2,nums[1])
        
        result=0
        for i in range(2,n):
            result = max(prev, prev2+nums[i])
            prev2=prev
            prev=result
        
        return prev
