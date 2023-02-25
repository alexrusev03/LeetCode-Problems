class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        res=[]
        temp=[]
        self.helper(0,nums,temp,res)
        return res
    
    def helper(self, i: int,nums: List[int],temp: List[int],res: List[List[int]]):
        res.append(temp.copy())
        for j in range(i, len(nums)):
            if j>i and nums[j] == nums[j-1]:
                continue
            
            temp.append(nums[j])
            self.helper(j+1,nums,temp,res)
            temp.pop()
