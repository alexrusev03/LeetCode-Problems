public class Solution {
    public long MaxMatrixSum(int[][] matrix) {
        int count=0;
        int min=Int32.MaxValue;
        long res=0;
        for(int i=0; i<matrix.Length; i++){
            for(int j=0; j<matrix[0].Length; j++){
                if(matrix[i][j]<0){
                    count+=1;
                }
                res+=Math.Abs(matrix[i][j]);
                if(Math.Abs(matrix[i][j])<min){
                    min=Math.Abs(matrix[i][j]);
                }
            }
        }
        if(count%2==1){
            return res-(2*min);
        }
        else{
            return res;
        }
    }
}
