class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        n = len(heights)
        l=[0]*n
        r=[0]*n
        r[n - 1] = n
        l[0] = -1
        for i in range(1,n):
            temp = i - 1
            while temp >= 0 and heights[temp] >= heights[i]:
                temp = l[temp]
            l[i] = temp
        for i in range(n-2,-1,-1):
            temp = i + 1
            while temp < n and heights[temp] >= heights[i]:
                temp = r[temp]
            r[i] = temp
        res = 0
        for i in range(n):
            res = max(res, heights[i] * (r[i] - l[i] - 1))
        return res
