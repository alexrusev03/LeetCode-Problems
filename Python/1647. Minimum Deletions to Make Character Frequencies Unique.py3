class Solution:
    def minDeletions(self, s: str) -> int:
        arr = [0]*26
        for c in s:
            arr[ord(c) - ord('a')]+=1
        res = 0
        arr.sort()
        for i in range(24,-1,-1):
            if arr[i] == 0:
                break
            if arr[i] >= arr[i+1]:
                temp = arr[i]
                arr[i] = max(0, arr[i+1] -1)
                res += temp - arr[i]
        return res
