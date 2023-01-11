class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int>dp(n, 0);
        for(int i=0; i<n; i++){
            dp[i]=triangle[n-1][i];
        }
        for(int i=n-2; i>=0; i--){
            vector<int>arr(n, 0);
            for(int j=i; j>=0; j--){
                arr[j]=min(triangle[i][j]+dp[j], triangle[i][j]+dp[j+1]);
            }
            dp=arr;
        }
        return dp[0];
    }
};
