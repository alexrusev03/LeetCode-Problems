public class Solution {
    public int MaxProfit(int[] prices) {
        int n=prices.Length;
        int[][] dp=new int[n][];
        for(int i=0; i<dp.Length; i++){
            dp[i] = new int[2];
            dp[i][0] = 0;
            dp[i][1] = 0;
        }
        return helper(0,1,prices,dp);
    }
    public int helper(int i,int buy,int[] prices,int[][] dp){
        if(i>=prices.Length){
            return 0;
        }
        if(dp[i][buy]!=0){
            return dp[i][buy];
        }
        if(buy!=0){
            dp[i][buy]=Math.Max(-prices[i]+helper(i+1,0,prices,dp),helper(i+1,1,prices,dp));
        }
        else{
            dp[i][buy]=Math.Max(prices[i]+helper(i+2,1,prices,dp),helper(i+1,0,prices,dp));
        }
        return dp[i][buy];
    }
}
