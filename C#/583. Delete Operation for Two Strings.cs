public class Solution {
    public int MinDistance(string word1, string word2) {
        int n1=word1.Length;
        int n2=word2.Length;
        return n1+n2-2*helper(word1,word2);
    }
    int helper(string word1,string word2) {
        int n1=word1.Length;
        int n2=word2.Length;
        int[,] dp = new int[n1+1,n2+1];
        for(int i=0;i<=n1;i++) {
            for(int j=0;j<=n2;j++){
                if(i==0||j==0){
                    dp[i,j]=0;
                }
                else if(word1[i-1]==word2[j-1]) { 
                    dp[i,j]=1+dp[i-1,j-1];
                }
                else{
                    dp[i,j]=Math.Max(dp[i-1,j],dp[i,j-1]);
                }
            }
        }
        return dp[n1,n2];
    }
}
