class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        n=len(intervals)
        res=[]
        for i in range(n):
            if intervals[i][1] < newInterval[0]:
                res.append(intervals[i])
            elif newInterval[1] < intervals[i][0]:
                res.append(newInterval)
                newInterval=intervals[i]
            else:
                newInterval[0]=min(newInterval[0],intervals[i][0])
                newInterval[1]=max(newInterval[1],intervals[i][1])
        res.append(newInterval)
        return res
