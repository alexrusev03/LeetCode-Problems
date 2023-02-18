class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return helper(0,1,fee,prices,dp);
    }
    int helper(int i,int buy,int fee,vector<int>& prices,vector<vector<int>>& dp){
        if(i>=prices.size()){
            return 0;
        }
        if(dp[i][buy]!=-1){
            return dp[i][buy];
        }
        if(buy!=0){
            dp[i][buy]=max(-prices[i]+helper(i+1,0,fee,prices,dp),helper(i+1,1,fee,prices,dp));
        }
        else{
            dp[i][buy]=max(prices[i]-fee+helper(i+1,1,fee,prices,dp),helper(i+1,0,fee,prices,dp));
        }
        return dp[i][buy];
    }
};
