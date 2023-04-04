class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        diff=float('inf')
        res=0
        for i in range(len(nums)):
            j=i+1
            n= len(nums)-1
            while j<n:
                if abs(nums[i] + nums[j] + nums[n] - target) < diff:
                    diff=abs(nums[i] + nums[j] + nums[n] - target)
                    res = nums[i] + nums[j] + nums[n]
                if nums[i]+nums[j]+nums[n]<target:
                    j+=1
                else:
                    n-=1
            if res==target:
                break
        return res
