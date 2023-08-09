class Solution {
    public int minFallingPathSum(int[][] grid) {
        int n = grid.length;
        int[][] arr = new int[n][n];
        for(int i=0;i<n;i++){
            arr[0][i]=grid[0][i];
        }
        int res=Integer.MAX_VALUE;
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int temp=Integer.MAX_VALUE;
                for(int k=0;k<n;k++){
                    if(k==j){
                        continue;
                    }
                    temp=Math.min(temp,grid[i][j]+arr[i-1][k]);
                }
                arr[i][j]=temp;
            }
        }
        for(int i: arr[n-1]){
            res=Math.min(res,i);
        }
        return res;
    }
}
