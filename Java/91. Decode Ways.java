class Solution {
    public int numDecodings(String s) {
        int[] dp=new int[101];
        Arrays.fill(dp,-1);
        return helper(0, s, dp);
    }
    public int helper(int i, String s, int[] dp) {
        int n = s.length();
        if(i >= n){return 1;}
        if(dp[i] != -1){return dp[i];}
        int res = 0;
        int t1 = s.charAt(i) - '0';
        int t2 = 0;
        if(i < n - 1) {
            t2 = t1 * 10 + s.charAt(i+1) - '0';
        }
        if(t1 >=1) res+= helper(i + 1, s, dp);
        if(t1 >= 1 && t2 >= 1 && t2 <= 26) res+= helper(i + 2, s, dp);
        return dp[i] = res;
    }
}
