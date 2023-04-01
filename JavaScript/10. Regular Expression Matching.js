/**
 * @param {string} s
 * @param {string} p
 * @return {boolean}
 */
var isMatch = function(s, p) {
    var n = s.length;
    var m = p.length;
    var dp = Array(n+1).fill(false).map(()=>Array(m+1).fill(false))
    dp[0][0] = true;
    for(var i=0; i<=n; i++){
        for(var j=1; j<=m; j++){
            if(p[j-1] == '*'){
                dp[i][j] = dp[i][j-2] || (i != 0 && (s[i-1] == p[j-2] || p[j-2] == '.') && dp[i-1][j]);
            }
            else if(i > 0 && (s[i-1] == p[j-1] || p[j-1] == '.')){
                dp[i][j]=dp[i-1][j-1];
            }
        }
    }
    return dp[n][m];
};
