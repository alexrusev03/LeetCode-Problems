public class Solution {
    public int MinFallingPathSum(int[][] matrix) {
        int n = matrix.Length;
        int l = 0;
        int r = 0;
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j==0){
                    l = Int32.MaxValue;
                    r=matrix[i-1][j+1];
                }
                else if(j==n-1){
                    r = Int32.MaxValue;
                    l=matrix[i-1][j-1];
                }
                else{
                    r=matrix[i-1][j+1];
                    l=matrix[i-1][j-1];
                }
                matrix[i][j]=matrix[i][j]+Math.Min(matrix[i-1][j], Math.Min(l, r));
            }
        }
        int res = Int32.MaxValue;
        for(int j=0;j<n; j++){
            res = Math.Min(res, matrix[n-1][j]);
        }
        return res;
    }
}
