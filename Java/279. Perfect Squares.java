class Solution {
    public int numSquares(int n) {
        if(n<4){return n;}
        int[] dp = new int[n+1];
        for(int i = 0; i<n+1; i++){
            dp[i] = Integer.MAX_VALUE;
        }
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;
        for(int i=4;i<=n;i++){
            for(int j=1;j<=Math.sqrt(n);j++){
                if(i>=j*j){
                    dp[i] = Math.min(dp[i],1+dp[i-j*j]);
                }
            }
        }
        return dp[n];
    }
}
