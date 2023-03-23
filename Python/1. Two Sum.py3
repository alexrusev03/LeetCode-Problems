class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        index=[]
        n = len(nums)
        for i in range(n):
            k = target -  nums[i]
            for j in range(i+1,n):
                if nums[j]==k:
                    index.append(i)
                    index.append(j)
                    break
        return index
