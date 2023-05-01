class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        m = len(matrix)
        n = len(matrix[0])
        flag = False
        for j in range(n):
            if matrix[0][j]==0:
                flag = True
            for i in range(1,m):
                if matrix[i][j]==0:
                    matrix[0][j]=0
                    matrix[i][0]=0
        for j in range(1,n):
            for i in range(1,m):
                if matrix[0][j]==0 or matrix[i][0]==0:
                    matrix[i][j]=0
        if matrix[0][0] == 0:
            for i in range(m):
                matrix[i][0] = 0
        if flag==True:
            for j in range(n):
                matrix[0][j] = 0
