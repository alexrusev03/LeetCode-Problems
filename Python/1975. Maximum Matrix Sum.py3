class Solution:
    def maxMatrixSum(self, matrix: List[List[int]]) -> int:
        count=0
        min=sys.maxsize
        res=0
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j]<0:
                    count+=1
                res+=abs(matrix[i][j])
                if abs(matrix[i][j])<min:
                    min=abs(matrix[i][j])
        if count%2==1:
            return res-(2*min)
        else:
            return res
