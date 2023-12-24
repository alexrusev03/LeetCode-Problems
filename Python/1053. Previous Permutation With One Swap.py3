class Solution:
    def prevPermOpt1(self, arr: List[int]) -> List[int]:
        n = len(arr)
        i = n-2
        j = n-1
        while i>=0 and arr[i+1]>=arr[i]:
            i-=1
        if i==-1:
            return arr
        while (arr[j]>=arr[i] and j>i) or arr[j-1]==arr[j]:
            j-=1
        t = arr[i]
        arr[i] = arr[j]
        arr[j] = t
        return arr
