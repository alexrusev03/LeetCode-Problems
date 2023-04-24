class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        n = len(intervals)
        res=[]
        intervals.sort()
        for i in range(n):
            if not res or res[-1][1] < intervals[i][0]:
                res.append(intervals[i])
            else:
                res[-1][1] = max(res[-1][1], intervals[i][1])
                res[-1][0] = min(res[-1][0], intervals[i][0])
        return res
