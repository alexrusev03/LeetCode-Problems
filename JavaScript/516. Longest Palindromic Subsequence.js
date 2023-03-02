/**
 * @param {string} s
 * @return {number}
 */
var longestPalindromeSubseq = function(s) {
    var str="";
    var n=s.length;
    for (var i = n - 1;  i >= 0; i--) {
        str += s[i] + "";
    }
    var dp = Array(n+1).fill().map(v=>Array(n+1).fill(0));
    for(var i = n-1; i >= 0; i--){
        for(var j = n-1; j>=0; j--){
            if(s[i] == str[j]){
                dp[i][j] = dp[i+1][j+1]+1;
            } 
            else{
                dp[i][j] = Math.max(dp[i][j+1], dp[i+1][j]);
            }
        }
    }
    return dp[0][0];
};
