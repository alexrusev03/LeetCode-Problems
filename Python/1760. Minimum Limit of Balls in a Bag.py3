class Solution:
    def minimumSize(self, nums: List[int], maxOperations: int) -> int:
        mx = 0
        mn = 1
        res = 0
        for i in nums:
            mx = max(mx,i)
        while mn <= mx:
            c = 0
            m = int((mx+mn)/2)
            for i in range(len(nums)):
                c += int((nums[i]-1)/m)
            if c>maxOperations:
                mn = m+1
            else:
                res = m
                mx = m-1
        return res
