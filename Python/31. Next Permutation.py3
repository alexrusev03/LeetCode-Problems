class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        i = len(nums)-1
        j = len(nums)-1
        while i>0 and nums[i-1]>=nums[i]:
            i-=1
        if i>0:
            while nums[i-1]>=nums[j]:
                j-=1
            self.swap(nums, i-1, j)
        nums[i:]=reversed(nums[i:])
    def swap(self, nums: List[int], i: int, j: int):
        t = nums[i]
        nums[i] = nums[j]
        nums[j] = t
