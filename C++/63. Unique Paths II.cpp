class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n));
        return helper(m-1,n-1,obstacleGrid,dp);
    }
    int helper(int m, int n, vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp){
        if(m<0 || n<0 || obstacleGrid[m][n]==1){
            return 0;
        }
		if(m==0 && n==0){
            return 1;
        }
        if(dp[m][n]!=0){
            return dp[m][n];
        }
        int l=helper(m,n-1,obstacleGrid,dp);
        int u=helper(m-1,n,obstacleGrid,dp);
        return dp[m][n]=l+u;
    }
};
