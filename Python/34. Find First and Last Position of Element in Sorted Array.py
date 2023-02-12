class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        pos = [-1,-1]
        n = len(nums)
        idx=0
        for i in range(0,n):
            if nums[i]==target:
                if pos[0]==-1:
                    pos[0]=i
                
                idx=max(i,idx)
            
        
        if pos[0]!=-1:
            pos[1]=idx

        return pos
