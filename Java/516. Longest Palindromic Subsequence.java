class Solution {
    public int longestPalindromeSubseq(String s) {
        String str="";
        int n=s.length();
        for (int i = n - 1;  i >= 0; i--) {
            str += s.charAt(i) + "";
        }
        int[][] dp = new int[n+1][n+1];
        for (int[] r: dp){Arrays.fill(r, -1);}
        return helper(dp,s,str,n-1,n-1);
    }
    public int helper(int[][] dp,String s,String str,int i,int j){
        if(i<0 || j<0){
            return 0;
        }
        if(dp[i][j]!=-1){return dp[i][j];}
        if(s.charAt(i)==str.charAt(j)){
            return dp[i][j]=1+helper(dp,s,str,i-1,j-1);
        }
        return dp[i][j]=Math.max(helper(dp,s,str,i-1,j),helper(dp,s,str,i,j-1));
    }
}
