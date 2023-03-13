/**
 * @param {number} n
 * @return {number}
 */
var numSquares = function(n) {
    if(n<4){return n;}
    var dp = new Array(n+1).fill(Number.MAX_SAFE_INTEGER);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    for(var i=4;i<=n;i++){
        for(var j=1;j<=Math.sqrt(n);j++){
            if(i>=j*j){
                dp[i] = Math.min(dp[i],1+dp[i-j*j]);
            }
        }
    }
    return dp[n];
};
