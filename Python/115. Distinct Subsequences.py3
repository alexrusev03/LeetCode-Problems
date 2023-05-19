class Solution:
    def numDistinct(self, s: str, t: str) -> int:
        n1 = len(s)
        n2 = len(t)
        arr = [[0 for x in range(n1+1)] for y in range(n2+1)] 
        for j in range(n1+1):
            arr[0][j] = 1
        for i in range(n2):
            for j in range(n1):
                if t[i] == s[j]:
                    arr[i+1][j+1] = (arr[i][j] + arr[i+1][j])
                else:
                    arr[i+1][j+1] = arr[i+1][j]
        return arr[n2][n1]
