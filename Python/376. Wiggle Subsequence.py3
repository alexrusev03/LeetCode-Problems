class Solution:
    def wiggleMaxLength(self, nums: List[int]) -> int:
        n1 = 0
        n2 = 0
        for i in range(1, len(nums)):
            if nums[i] > nums[i-1]:
                n1 = n2+1
            elif nums[i] < nums[i-1]:
                n2 = n1+1
        
        return max(n1+1, n2+1)
