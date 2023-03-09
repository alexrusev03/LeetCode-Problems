/**
 * @param {number[]} coins
 * @param {number} amount
 * @return {number}
 */
var coinChange = function(coins, amount) {
    var n = coins.length;
    var dp = new Array(n+1).fill(0).map(() => new Array(amount+1).fill(0));
    for(var i=0;i<=amount;i++){
        dp[0][i] = Number.MAX_SAFE_INTEGER-1;
    }
    for(var i=1;i<=amount;i++){
        if(i%coins[0]==0){
            dp[1][i] = i/coins[0];
        }
        else{
            dp[1][i] = Number.MAX_SAFE_INTEGER-1;
        }
    }
    for(var i=2;i<=n;i++){
        for(var j=1;j<=amount;j++){
            if(coins[i-1]<=j){
                dp[i][j] = Math.min(dp[i][j-coins[i-1]]+1,dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    if(dp[n][amount]==Number.MAX_SAFE_INTEGER-1){
        return -1;
    }
    else{
        return dp[n][amount];
    }
};
