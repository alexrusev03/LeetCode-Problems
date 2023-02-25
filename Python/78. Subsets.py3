class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res=[]
        temp=[]
        self.helper(0,nums,temp,res)
        return res

    def helper(self, i: int,nums: List[int],temp: List[int],res: List[List[int]]):
        if i==len(nums):
            res.append(temp.copy())
            return
        
        temp.append(nums[i])
        self.helper(i+1,nums,temp,res)
        temp.pop()
        self.helper(i+1,nums,temp,res)
