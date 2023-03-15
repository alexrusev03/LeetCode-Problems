class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        arr=[]
        sum=0
        for i in range(len(nums)):
            sum+=nums[i]
            arr.append(sum)
        n = len(arr)
        if sum==arr[0]:
            return 0
        for i in range(1,n):
            if arr[i-1]==arr[n-1]-arr[i]:
                return i
        return -1
