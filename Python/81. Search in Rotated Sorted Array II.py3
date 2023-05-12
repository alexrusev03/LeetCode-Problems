class Solution:
    def search(self, nums: List[int], target: int) -> bool:
        l = 0
        r = len(nums) - 1
        while l <= r:
            m = int((r+l)/2)
            if nums[m] == target or nums[l]==target or nums[r]==target:
                return True
            elif nums[m] > target:
                r-=1
                l+=1
            else:
                l+=1
        return False
