class Solution:
    def combinationSum4(self, nums: List[int], target: int) -> int:
        arr = [-1]*(target + 1)
        return self.helper(nums,arr,target)

    def helper(self,nums: List[int],arr: List[int], target:int):
        if target < 0:
            return 0
        if arr[target] != -1:
            return arr[target]
        if target == 0:
            return 1
        res = 0
        for i in range(len(nums)):
            res += self.helper(nums,arr,target - nums[i])
        
        arr[target] = res
        return arr[target]
