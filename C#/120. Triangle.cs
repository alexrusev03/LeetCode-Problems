public class Solution {
    public int MinimumTotal(IList<IList<int>> triangle) {
        int n=triangle.Count();
        int[] dp= new int[n];
        for(int i=0; i<n; i++){
            dp[i]=triangle[n-1][i];
        }
        for(int i=n-2; i>=0; i--){
            int[] arr= new int[n];
            for(int j=i; j>=0; j--){
                arr[j]=Math.Min(triangle[i][j]+dp[j], triangle[i][j]+dp[j+1]);
            }
            dp=arr;
        }
        return dp[0];
    }
}
