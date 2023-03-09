class Solution {
    public int coinChange(int[] coins, int amount) {
        int n = coins.length;
        int[][] dp = new int[n+1][amount+1];
        for(int i=0;i<=amount;i++){
            dp[0][i] = Integer.MAX_VALUE-1;
        }
        for(int i=1;i<=amount;i++){
            if(i%coins[0]==0){
                dp[1][i] = i/coins[0];
            }
            else{
                dp[1][i] = Integer.MAX_VALUE-1;
            }
        }
        for(int i=2;i<=n;i++){
            for(int j=1;j<=amount;j++){
                if(coins[i-1]<=j){
                    dp[i][j] = Math.min(dp[i][j-coins[i-1]]+1,dp[i-1][j]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        if(dp[n][amount]==Integer.MAX_VALUE-1){
            return -1;
        }
        else{
            return dp[n][amount];
        }
    }
}
