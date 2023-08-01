class Solution:
    def oddCells(self, m: int, n: int, indices: List[List[int]]) -> int:
        arr = [[0 for x in range(n)] for y in range(m)]
        res = 0
        for i in range(len(indices)):
            for j in range(m):
                arr[j][indices[i][1]]+=1
            for k in range(n):
                arr[indices[i][0]][k]+=1
        for i in range(m):
            for j in range(n):
                if arr[i][j]%2==1:
                    res+=1
        return res
