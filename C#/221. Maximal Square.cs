public class Solution {
    public int MaximalSquare(char[][] matrix) {
        int a = 0;
        int m=matrix.Length;
        int n=matrix[0].Length;
        int[,] dp = new int [m+1,n+1];
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (matrix[i-1][j-1] == '1'){
                    dp[i,j] = Math.Min(Math.Min(dp[i,j - 1], dp[i - 1,j]), dp[i - 1,j - 1]) + 1;
                    a = Math.Max(a, dp[i,j]);
                }
            }
        }
        return a*a;
    }
}
