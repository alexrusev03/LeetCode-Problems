public class Solution {
    public int MinDistance(string word1, string word2) {
        int n1 = word1.Length;
        int n2 = word2.Length;
        int[,] dp = new int[n1+1,n2+1];
        for (int i = 1; i <= n1; i++){
            dp[i,0] = i;
        }
        for (int j = 1; j <= n2; j++){
            dp[0,j] = j;
        }
        for (int i = 1; i<=n1; i++){
            for (int j = 1; j<=n2; j++){
                if (word1[i-1] == word2[j-1]){
                    dp[i,j] = dp[i-1,j-1];
                }
                else{
                    dp[i,j] = 1 + Math.Min(dp[i-1,j-1],Math.Min(dp[i-1,j],dp[i,j-1]));
                }
            }
        }
        return dp[n1,n2];
    }
}
