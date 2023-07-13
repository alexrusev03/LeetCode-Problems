class Solution:
    def findLength(self, nums1: List[int], nums2: List[int]) -> int:
        m=len(nums1)
        n=len(nums2)
        res=0;
        arr = [[0 for x in range(n+1)] for y in range(m+1)] 
        for i in range(1,m+1):
            for j in range(1,n+1):
                if nums1[i-1]==nums2[j-1]:
                    arr[i][j]=arr[i-1][j-1]+1
                    res=max(arr[i][j],res)
        return res
