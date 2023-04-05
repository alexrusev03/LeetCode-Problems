class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        res=[]
        n=len(nums)
        nums.sort()
        for i in range(n-3):
            for j in range(i+1,n-2):
                l=j+1
                r=n-1
                while l<r:
                    sum=nums[i]+nums[j]+nums[l]+nums[r]
                    if sum==target:
                        arr=[nums[i],nums[j],nums[l],nums[r]]
                        if arr not in res:
                            res.append(arr)
                        l+=1
                        r-=1
                    elif sum<target:
                        l+=1
                    else:
                        r-=1
                while j<n-2 and nums[j]==nums[j+1]:
                    j+=1
            while i<n-3 and nums[i]==nums[i+1]:
                i+=1
        return res
