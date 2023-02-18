/**
 * @param {number[]} prices
 * @param {number} fee
 * @return {number}
 */
var maxProfit = function(prices, fee) {
    var n=prices.length;
    var dp = Array(n*2).fill().map(() => [])
    var helper = function(i,buy,fee,prices,dp) {
        if(i>=prices.length){
            return 0;
        }
       if(dp[i][buy]!=null){
            return dp[i][buy];
        }
        if(buy!=0){
            dp[i][buy]=Math.max(-prices[i]+helper(i+1,0,fee,prices,dp),helper(i+1,1,fee,prices,dp));
        }
        else{
            dp[i][buy]=Math.max(prices[i]-fee+helper(i+1,1,fee,prices,dp),helper(i+1,0,fee,prices,dp));
        }
        return dp[i][buy];
    }
    return helper(0,1,fee,prices,dp);
};
