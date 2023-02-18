class Solution {
    public int maxProfit(int[] prices) {
        int n=prices.length;
        Integer[][] dp=new Integer[n][2];
        return helper(0,1,prices,dp);
    }
    int helper(int i,int buy,int[] prices,Integer[][] dp){
        if(i>=prices.length){
            return 0;
        }
        if(dp[i][buy]!=null){
            return dp[i][buy];
        }
        if(buy!=0){
            dp[i][buy]=Math.max(-prices[i]+helper(i+1,0,prices,dp),helper(i+1,1,prices,dp));
        }
        else{
            dp[i][buy]=Math.max(prices[i]+helper(i+2,1,prices,dp),helper(i+1,0,prices,dp));
        }
        return dp[i][buy];
    }
}
