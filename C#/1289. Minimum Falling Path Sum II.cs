public class Solution {
    public int MinFallingPathSum(int[][] grid) {
        int n = grid.Length;
        int[,] arr = new int[n,n];
        for(int i=0;i<n;i++){
            arr[0,i]=grid[0][i];
        }
        int res=Int32.MaxValue;
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int temp=Int32.MaxValue;
                for(int k=0;k<n;k++){
                    if(k==j){
                        continue;
                    }
                    temp=Math.Min(temp,grid[i][j]+arr[i-1,k]);
                }
                arr[i,j]=temp;
            }
        }
        for(int i=0; i<n; i++){
            res=Math.Min(res,arr[n-1,i]);
        }
        return res;
    }
}
