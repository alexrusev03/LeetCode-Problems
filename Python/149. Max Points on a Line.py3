class Solution:
    def maxPoints(self, points: List[List[int]]) -> int:
        n = len(points)
        if(n <= 2):
            return n
        res= 0
        for i in range(n):
            for j in range(i+1,n):
                x1 = points[i][0]
                x2 = points[j][0]
                y1 = points[i][1]
                y2 = points[j][1]
                num = 2
                for k in range(n):
                    if k!=i and k!=j:
                        x3 = points[k][0]
                        y3 = points[k][1]
                        if (y2-y1)*(x3-x1)==(x2-x1)*(y3-y1):
                            num+=1
                res = max(res , num)
        return res
