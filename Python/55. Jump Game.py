class Solution:
    def canJump(self, nums: List[int]) -> bool:
        end=0
        idx=0
        n=len(nums)
        for i in range(0,n):
            idx=max(idx,i+nums[i])
            if i==end:
                end=idx
            
        
        if end>=n-1:
            return True
        return False
