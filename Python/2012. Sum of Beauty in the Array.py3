class Solution:
    def sumOfBeauties(self, nums: List[int]) -> int:
        n = len(nums)
        r = [0]*n
        l = [0]*n
        r[n - 1] = nums[n - 1]
        l[0] = nums[0]
        for i in range(n - 2, -1, -1):
            r[i] = min(r[i + 1], nums[i])
        for i in range(1, n):
            l[i] = max(l[i - 1], nums[i])
        res = 0
        for i in range(1, n - 1):
            if nums[i] > l[i - 1] and nums[i] < r[i + 1]:
                res += 2
            elif nums[i] > nums[i - 1] and nums[i] < nums[i + 1]:
                res+=1
        return res
