class Solution:
    def maxSubarraySumCircular(self, nums: List[int]) -> int:
        sum=0
        currMax=0
        currMin=0
        maxs=float('-inf')
        mins=float('inf')
        for i in nums:
            sum+=i
            currMax+=i
            currMin+=i
            maxs=max(maxs, currMax)
            if currMax<0:
                currMax=0

            mins=min(mins, currMin)
            if currMin>0:
                currMin=0
        
        if sum==mins:
            return maxs
        
        return max(maxs,sum-mins)
