class Solution:
    def maxCount(self, m: int, n: int, ops: List[List[int]]) -> int:
        r = m
        c = n
        for i in range(len(ops)):
            if ops[i][0] < r:
                r = ops[i][0]
            if ops[i][1] < c:
                c = ops[i][1]
        return r*c
