public class Solution {
    public bool IsMatch(string s, string p) {
        bool[,] dp=new bool[s.Length+1,p.Length+1];
        dp[0,0]=true;
        for(int i=0;i<p.Length;i++){
            if(p[i]=='*'){
                dp[0,i+1]=dp[0,i];
            }
        }
        for(int i=1;i<s.Length+1;i++){
            for(int j=1;j<p.Length+1;j++){
                if(s[i-1]==p[j-1] || p[j-1]=='?'){
                        dp[i,j]=dp[i-1,j-1];
                }
                else if(p[j-1]=='*'){
                        dp[i,j]=dp[i-1,j]||dp[i,j-1];
                }
                else{
                    dp[i,j]=false;
                }
            }
        }
        return dp[s.Length,p.Length];
    }
}
