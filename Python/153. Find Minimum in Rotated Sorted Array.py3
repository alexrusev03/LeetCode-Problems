class Solution:
    def findMin(self, nums: List[int]) -> int:
        sol=nums[0]
        l=0
        r=len(nums)-1
        while l<=r:
            mid=int((l+r)/2)
            if nums[mid]>=nums[l]:
                if nums[l]<sol:
                    sol=nums[l]
                l=mid+1
            
            else:
                if nums[mid]<sol:
                    sol=nums[mid]
                r=mid-1
            
        return sol
