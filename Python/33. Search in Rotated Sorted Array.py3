class Solution:
    def search(self, nums: List[int], target: int) -> int:
        n = len(nums)
        l = 0
        r = n-1
        while l<=r:
            m = int((l+r)/2)
            if nums[m]==target:
                return m
            elif nums[m]>=nums[l]:
                if nums[m]>target and nums[l]<=target:
                    r=m-1
                else:
                    l=m+1
            
            else:
                if nums[m]<target and nums[r]>=target:
                    l=m+1
                
                else:
                    r=m-1
                
        return -1
