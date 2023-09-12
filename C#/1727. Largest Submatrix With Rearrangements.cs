public class Solution {
    public int LargestSubmatrix(int[][] matrix) {
        int m = matrix.Length;
        int n = matrix[0].Length;
        int res = 0;
        for(int i = 1; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] != 0){
                    matrix[i][j] = matrix[i-1][j] + 1;
                }
            }
        }
        for(int i = 0; i < m; i++){
            Array.Sort(matrix[i]);
            for(int j = 0; j < n; j++){
                res = Math.Max(res, matrix[i][j] * (n - j));
            }
        }
        return res;
    }
}
