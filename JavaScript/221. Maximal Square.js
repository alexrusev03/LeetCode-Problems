/**
 * @param {character[][]} matrix
 * @return {number}
 */
var maximalSquare = function(matrix) {
    var a = 0;
    var m=matrix.length;
    var n=matrix[0].length;
    var dp = new Array(m+1).fill(0).map(() => new Array(n+1).fill(0));
    for (var i = 1; i <= m; i++) {
        for (var j = 1; j <= n; j++) {
            if (matrix[i-1][j-1] == '1'){
                dp[i][j] = Math.min(Math.min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]) + 1;
                a = Math.max(a, dp[i][j]);
            }
        }
    }
    return a*a;
};
