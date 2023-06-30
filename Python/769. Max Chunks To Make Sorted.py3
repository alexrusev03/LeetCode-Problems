class Solution:
    def maxChunksToSorted(self, arr: List[int]) -> int:
        res=0
        m=0
        for i in range(len(arr)):
            m=max(m,arr[i])
            if m==i:
                res+=1
        return res
