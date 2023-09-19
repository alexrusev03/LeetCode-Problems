class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        n = len(nums)
        maxidx = 0
        minidx = 0
        for i in range(n):
            if nums[i] > nums[maxidx]:
                maxidx = i
            if nums[i] < nums[minidx]:
                minidx = i
        fr  = max(maxidx,minidx) + 1
        bc = n - min(minidx,maxidx)
        both = min(minidx,maxidx) + 1 + (n - max(minidx,maxidx))
        return min(fr,min(bc,both))
