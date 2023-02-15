class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        n = len(nums)
        l = 1
        r = 1
        ans = float('-inf')
        for i in range(0,n):
            if l==0:
                l=1
            if r==0:
                r=1
            l=l*nums[i]
            r=r*nums[n-i-1]
            ans = max(ans, max(l,r))
        
        return ans
