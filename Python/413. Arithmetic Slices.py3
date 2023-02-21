class Solution:
    def numberOfArithmeticSlices(self, nums: List[int]) -> int:
        n = len(nums)
        count = 0
        num = 0
        for i in range(n-2):
            if nums[i+1] - nums[i] == nums[i+2] - nums[i+1]:
                 count+=1
            
            else:
                num += int(count * (count + 1) / 2)
                count=0

        if count!=0:
            num += int(count * (count+1) / 2)
        
        return num
