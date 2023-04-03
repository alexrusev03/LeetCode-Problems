class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 0:
            return 0
        num = 1
        for i in range(n-1):
            if nums[i] != nums[i + 1]:
                nums[num] = nums[i + 1]
                num+=1
        return num
