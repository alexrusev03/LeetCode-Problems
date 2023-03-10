class Solution {
    public int change(int amount, int[] coins) {
        int n = coins.length;
        int[] dp = new int[amount+1];
        dp[0]=1;
        for(int i = 0 ; i<n;i++){
            for(int j=1;j<=amount;j++){
                if(j-coins[i]>=0){
                    dp[j]+=dp[j-coins[i]];
                }
            }
        }
        return dp[amount];   
    }
}
