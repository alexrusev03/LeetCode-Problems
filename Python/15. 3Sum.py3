class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        n=len(nums)
        sol=[]
        for i in range(0,n-1):
            l=i+1
            r=n-1
            if i>0 and nums[i]==nums[i-1]:
                continue
            while l<r: 
                if nums[i]+nums[l]+nums[r]==0:
                    temp=[]
                    temp.append(nums[i])
                    temp.append(nums[l])
                    temp.append(nums[r])
                    sol.append(temp)
                    while l<r and nums[l]==nums[l+1]:
                        l+=1
                    while l<r and nums[r]==nums[r-1]:
                        r-=1
                    l+-1
                    r-=1
                
                elif nums[i]+nums[l]+nums[r]<0:
                    l+=1
                
                else:
                    r-=1
                
        return sol
