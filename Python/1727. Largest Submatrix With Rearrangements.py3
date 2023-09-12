class Solution:
    def largestSubmatrix(self, matrix: List[List[int]]) -> int:
        m = len(matrix)
        n = len(matrix[0])
        res = 0
        for i in range(1, m):
            for j in range(n):
                if matrix[i][j] != 0:
                    matrix[i][j] = matrix[i-1][j] + 1
        for i in range(m):
            matrix[i].sort()
            for j in range(n):
                res = max(res, matrix[i][j] * (n - j))
        return res
