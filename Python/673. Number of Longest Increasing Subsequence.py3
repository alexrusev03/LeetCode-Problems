class Solution:
    def findNumberOfLIS(self, nums: List[int]) -> int:
        n = len(nums)
        dp=[1]*n
        count=[1]*n  
        maxL = 1
        for i in range(1,n):
            for j in range(i):
                if nums[i]>nums[j]:
                    if dp[j] + 1 > dp[i]:
                        dp[i] = dp[j] + 1
                        count[i] = count[j]
                    elif dp[j]+1 == dp[i]:
                        count[i] += count[j]     
            maxL = max(maxL,dp[i])
        
        res = 0
        for i in range(n):
            if(dp[i]==maxL):
                res += count[i]
        
        return res
