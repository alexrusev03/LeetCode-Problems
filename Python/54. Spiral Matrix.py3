class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        m = len(matrix)
        n = len(matrix[0])
        u = 0
        d = m - 1
        l = 0
        r = n - 1
        idx = 0
        res=[0]*(m*n)
        while u < d+1 and l < r+1:
            for i in range(l,r+1):
                res[idx] = matrix[u][i]
                idx+=1
            u+=1
            if u > d:
                break
            for j in range(u,d+1):
                res[idx] = matrix[j][r]
                idx+=1
            r-=1
            if r < l:
                break
            for i in range(r,l-1,-1):
                res[idx] = matrix[d][i]
                idx+=1
            d-=1
            if d < u:
                break
            for j in range(d,u-1,-1):
                res[idx] = matrix[j][l]
                idx+=1
            l+=1
            if l > r:
                break
        return res
