/**
 * @param {number} amount
 * @param {number[]} coins
 * @return {number}
 */
var change = function(amount, coins) {
    var n = coins.length;
    var dp = new Array(amount+1).fill(0);
    dp[0]=1;
    for(var i = 0 ; i<n;i++){
        for(var j=1;j<=amount;j++){
            if(j-coins[i]>=0){
                dp[j]+=dp[j-coins[i]];
            }
        }
    }
    return dp[amount];   
};
