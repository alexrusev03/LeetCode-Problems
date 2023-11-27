class Solution:
    def minCostConnectPoints(self, points: List[List[int]]) -> int:
        n = len(points)
        ans = 0
        j = 0
        k = 1
        cost = [10000000]*n
        while k < n:
            cost[j] = sys.maxsize
            min_j = j
            for i in range(n):
                if cost[i] != sys.maxsize:
                    cost[i] = min(cost[i], abs(points[j][0] - points[i][0]) + abs(points[j][1] - points[i][1]))
                    if cost[i] < cost[min_j]:
                        min_j = i
            ans += cost[min_j]
            j = min_j
            k+=1
        return ans
