class Solution:
    def optimalDivision(self, nums: List[int]) -> str:
        s=""
        n=len(nums)
        if n==1:
            s+=str(nums[0])
            return s
        if n==2:
            s+=str(nums[0])+ "/" + str(nums[1])
            return s
        for i in range(n):
            if i==0:
                s+=str(nums[i])
                s+="/"
                s+="("
            elif i==(n-1):
                s+=str(nums[i])
            else:
                s+=str(nums[i])
                s+="/"
        s+=")"
        return s
