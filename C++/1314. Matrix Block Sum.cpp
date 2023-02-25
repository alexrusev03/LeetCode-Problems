class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>dp;
        dp.resize(m+1,vector<int>(n+1,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                dp[i+1][j+1]=dp[i+1][j]+mat[i][j]+dp[i][j+1]-dp[i][j];
            }
        }
        cout<<helper(1,1,dp,m,n);
        vector<vector<int>>res(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[i][j]=helper(i+k,j+k,dp,m,n)-helper(i-k-1,j+k,dp,m,n)-helper(i+k,j-k-1,dp,m,n)+helper(i-k-1,j-k-1,dp,m,n);
            }
        }
        return res;
    }
    int helper(int i, int j,vector<vector<int>>&dp, int m, int n) {
      if(i < 0 || j < 0){return 0;}
        if(i >= m){i = m - 1;}
        if(j >= n){j = n- 1;}
        return dp[i+1][j+1];
    }
};
