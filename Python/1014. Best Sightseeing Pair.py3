class Solution:
    def maxScoreSightseeingPair(self, values: List[int]) -> int:
        j= values[0]
        res= 0
        for i in range(1, len(values)):
            res=max(res, j+values[i]-i)
            j=max(j, values[i]+i)
        
        return res
