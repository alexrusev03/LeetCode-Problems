class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.size();
        int n2=s2.size();
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
        return helper(0,0,0,s1,s2,s3,dp);
    }
    int helper(int i,int j,int k,string s1, string s2, string s3,vector<vector<int>>&dp){
        int n1=s1.size();
        int n2=s2.size();
        int n3=s3.size();
        if(i==n1 && j==n2 && k==n3){
            return true;
        }
        if(k==n3){
            return false;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s1[i]==s3[k] && s2[j]==s3[k]){
            return dp[i][j]= helper(i+1,j,k+1,s1,s2,s3,dp) || helper(i,j+1,k+1,s1,s2,s3,dp);
        }
        else if(i<n1 && s1[i]==s3[k]){
            return helper(i+1,j,k+1,s1,s2,s3,dp);
        }
        else if(j<n2 && s2[j]==s3[k]){
            return helper(i,j+1,k+1,s1,s2,s3,dp);
        }
        else{
            return false;
        }
    }
};
