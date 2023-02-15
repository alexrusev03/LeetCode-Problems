class Solution:
    def jump(self, nums: List[int]) -> int:
        end=0
        idx=0
        c=0
        n=len(nums)
        if n==1:
            return 0
        for i in range(0,n):
            idx=max(idx,i+nums[i])
            if i==end:
                end=idx
                c+=1
            
            if end>=n-1:
                return c
            
        return 0
