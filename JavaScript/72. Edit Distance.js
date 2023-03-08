/**
 * @param {string} word1
 * @param {string} word2
 * @return {number}
 */
var minDistance = function(word1, word2) {
    var n1 = word1.length;
    var n2 = word2.length;
    var dp = Array(n1+1).fill(0).map(()=>(Array(n2+1).fill(0)));
    for (var i = 1; i <= n1; i++){
        dp[i][0] = i;
    }
    for (var j = 1; j <= n2; j++){
        dp[0][j] = j;
    }
    for (var i = 1; i<=n1; i++){
        for (var j = 1; j<=n2; j++){
            if (word1[i-1] == word2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                dp[i][j] = 1 + Math.min(dp[i-1][j-1],Math.min(dp[i-1][j],dp[i][j-1]));
            }
        }
    }
    return dp[n1][n2];
};
