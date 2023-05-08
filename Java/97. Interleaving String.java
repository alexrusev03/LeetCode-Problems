class Solution {
    public boolean isInterleave(String s1, String s2, String s3) {
        int n1=s1.length();
        int n2=s2.length();
        Boolean[][] dp = new Boolean[n1 + 1][n2 + 1];
        return helper(0,0,0,s1,s2,s3,dp);
    }
    public boolean helper(int i,int j,int k,String s1, String s2, String s3,Boolean[][] dp){
        int n1=s1.length();
        int n2=s2.length();
        int n3=s3.length();
        if(i==n1 && j==n2 && k==n3){
            return true;
        }
        if(k==n3){
            return false;
        }
        if(dp[i][j]!=null){
            return dp[i][j];
        }
        if(i<n1 && s1.charAt(i)==s3.charAt(k)){
            boolean a = helper(i+1,j,k+1,s1,s2,s3,dp);
            dp[i][j]=a;
            if(a){return true;}
        }
        if(j<n2 && s2.charAt(j)==s3.charAt(k)){
            boolean b = helper(i,j+1,k+1,s1,s2,s3,dp);
            dp[i][j]=b;
            if(b){return true;}
        }
        return false;
    }
}
