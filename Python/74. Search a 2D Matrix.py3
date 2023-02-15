class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m = len(matrix)
        n = len(matrix[0])
        l = 0
        r = m*n-1
        while l<=r:
            mid = int((l+r)/2)
            i=int(mid/n)
            j=int(mid%n)
            if matrix[i][j]==target:
                return True
            
            elif matrix [i][j]<target:
                l=mid + 1
            
            else:
                r=mid-1
            
    
        return False
