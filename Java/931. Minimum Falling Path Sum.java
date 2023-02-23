class Solution {
    public int minFallingPathSum(int[][] matrix) {
        int n = matrix.length;
        int l = 0;
        int r = 0;
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j==0){
                    l = Integer.MAX_VALUE;
                    r=matrix[i-1][j+1];
                }
                else if(j==n-1){
                    r = Integer.MAX_VALUE;
                    l=matrix[i-1][j-1];
                }
                else{
                    r=matrix[i-1][j+1];
                    l=matrix[i-1][j-1];
                }
                matrix[i][j]=matrix[i][j]+Math.min(matrix[i-1][j], Math.min(l, r));
            }
        }
        int res = Integer.MAX_VALUE;
        for(int j=0;j<n; j++){
            res = Math.min(res, matrix[n-1][j]);
        }
        return res;
    }
}
