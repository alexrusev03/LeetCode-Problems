/**
 * @param {number} n
 * @param {number} k
 * @param {number} target
 * @return {number}
 */
var numRollsToTarget = function(n, k, target) {
    var dp = new Array(n+1).fill(0).map(x => Array(target+1).fill(0));
    dp[0][0] = 1;
    for(var i=1; i<=n; i++){
        for(var j=1; j<=k; j++){
            for(var l=j; l<=target; l++){
                dp[i][l] = (dp[i][l] + dp[i-1][l-j]) % 1000000007;
            }
        }
    }
    return dp[n][target];
};
