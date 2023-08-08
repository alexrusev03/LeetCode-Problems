class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        n = len(arr)
        res=[]
        arr.sort()
        diff = sys.maxsize
        for i in range(n-1):
            diff = min(diff,arr[i+1]-arr[i])
        for i in range(n-1):
            if arr[i+1]-arr[i] == diff:
                res.append([arr[i],arr[i+1]])
        return res
