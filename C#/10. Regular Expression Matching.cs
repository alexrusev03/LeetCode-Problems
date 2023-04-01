public class Solution {
    public bool IsMatch(string s, string p) {
        int n = s.Length;
        int m = p.Length;
        bool[,] dp = new bool[n+1,m+1];
        dp[0,0] = true;
        for(int i=0; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(p[j-1] == '*'){
                    dp[i,j] = dp[i,j-2] || (i != 0 && (s[i-1] == p[j-2] || p[j-2] == '.') && dp[i-1,j]);
                }
                else if(i > 0 && (s[i-1] == p[j-1] || p[j-1] == '.')){
                    dp[i,j]=dp[i-1,j-1];
                }
            }
        }
        return dp[n,m];
    }
}
