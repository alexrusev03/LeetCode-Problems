public class Solution {
    public bool WordBreak(string s, IList<string> wordDict) {
        var dict = wordDict.ToHashSet();
        int n=s.Length;
        bool[] dp = new bool[n+1];
        dp[0]=true;
        for(int i=0;i<n;i++){
            if(!dp[i]){continue;}
            for(int j=i+1;j<n+1;j++){
                if(dict.Contains(s.Substring(i,j-i)))
                dp[j]=true;
            }
        }
        return dp[n];
    }
}
