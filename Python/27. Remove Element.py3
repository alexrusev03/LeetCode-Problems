class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        r = 0
        for i in range(len(nums)):
            if nums[i] == val:
                r+=1
            else:
                nums[i-r] = nums[i]
        return len(nums) - r
