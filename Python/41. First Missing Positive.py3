class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n = len(nums)+1
        nums.append(0)
        for i in range(n):
            if nums[i]<0 or nums[i]>n-1:
                nums[i]=0
        for j in range(n):
            nums[nums[j]%n]+=n
        for k in range(1,n):
            if nums[k]//n==0:
                return k
        return n
