class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)
        if n==1:
            return nums[0]
        else:
            vec1=[0]*n
            vec2=[0]*n
            vec1[1]=nums[0]
            vec2[1]=nums[1]
            for i in range(2,n):
                vec1[i] = max(vec1[i-1], vec1[i-2] + nums[i-1])
                vec2[i] = max(vec2[i-1], vec2[i-2] + nums[i])
            
            return max(vec1[n-1], vec2[n-1])
