public class Solution {
    public void SetZeroes(int[][] matrix) {
        int m = matrix.Length;
        int n = matrix[0].Length;
        bool flag = false;
        for(int j = 0; j < n; j++){
            if(matrix[0][j]==0){
                flag = true;
            }
            for(int i = 1; i < m; i++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int j = 1; j < n; j++){
            for(int i = 1; i < m; i++){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if (matrix[0][0] == 0) {
            for (int i = 0; i < m; i++){
                matrix[i][0] = 0;
            }
        }
        if (flag==true){
            for (int j = 0; j < n; j++){
                matrix[0][j] = 0;
            }
        }
    }
}
