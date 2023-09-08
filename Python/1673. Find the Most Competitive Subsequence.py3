class Solution:
    def mostCompetitive(self, nums: List[int], k: int) -> List[int]:
        n = len(nums)
        j = 0
        res = [0]*k
        for i in range(n):
            while j != 0 and n - i > k - j and res[j - 1] > nums[i]:
                j-=1
            if j < k:
                res[j] = nums[i]
                j+=1
        return res
