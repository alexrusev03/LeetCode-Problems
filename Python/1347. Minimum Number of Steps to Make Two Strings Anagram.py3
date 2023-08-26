class Solution:
    def minSteps(self, s: str, t: str) -> int:
        arr1 = [0]*26
        arr2 = [0]*26
        for i in s:
            arr1[ord(i)-ord('a')]+=1
        for i in t:
            arr2[ord(i)-ord('a')]+=1
        res = 0
        for i in range(26):
            res+=abs(arr1[i]-arr2[i])
        return int(res/2)
