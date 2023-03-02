public class Solution {
    public int LongestPalindromeSubseq(string s) {
        int n = s.Length;
        string str="";
        for(int i = n - 1;  i >= 0; i--) {
            str += s[i] + "";
        }
        int[,] dp = new int[n+1,n+1];
        for(int i = n-1; i >= 0; i--){
            for(int j = n-1; j>=0; j--){
                if(s[i] == str[j]){
                    dp[i,j] = dp[i+1,j+1]+1;
                } 
                else{
                    dp[i,j] = Math.Max(dp[i,j+1], dp[i+1,j]);
                }
            }
        }
        return dp[0,0];
    }
}
