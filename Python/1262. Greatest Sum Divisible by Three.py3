class Solution:
    def maxSumDivThree(self, nums: List[int]) -> int:
        arr=[0]*3
        for i in nums:
            copy = arr[:]
            for j in copy:
                arr[(i+j)%3]=max(arr[(i+j)%3],i+j)
        return arr[0]
