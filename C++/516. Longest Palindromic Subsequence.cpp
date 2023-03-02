class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string str=s;
        reverse(str.begin(),str.end()); 
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return helper(dp,s,str,n-1,n-1);
    }
    int helper(vector<vector<int>>&dp,string &s,string &str,int i,int j){
        if(i<0 || j<0){
            return 0;
        }
        if(dp[i][j]!=-1){return dp[i][j];}
        if(s[i]==str[j]){
            return dp[i][j]=1+helper(dp,s,str,i-1,j-1);
        }
        return dp[i][j]=max(helper(dp,s,str,i-1,j),helper(dp,s,str,i,j-1));
    }
};
