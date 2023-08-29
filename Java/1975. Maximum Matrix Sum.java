class Solution {
    public long maxMatrixSum(int[][] matrix) {
        int count=0;
        int min=Integer.MAX_VALUE;
        long res=0;
        for(int i=0; i<matrix.length; i++){
            for(int j=0; j<matrix[0].length; j++){
                if(matrix[i][j]<0){
                    count+=1;
                }
                res+=Math.abs(matrix[i][j]);
                if(Math.abs(matrix[i][j])<min){
                    min=Math.abs(matrix[i][j]);
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
