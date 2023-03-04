/**
 * @param {string} word1
 * @param {string} word2
 * @return {number}
 */
var minDistance = function(word1, word2) {
    var n1=word1.length;
    var n2=word2.length;
    return n1+n2-2*helper(word1,word2);
}
var helper = function(word1,word2) {
    var n1=word1.length;
    var n2=word2.length;
    var dp = new Array(n1+1).fill(0).map(() => new Array(n2+1).fill(0));;
    for(var i=0;i<=n1;i++) {
        for(var j=0;j<=n2;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
            else if(word1[i-1]==word2[j-1]) { 
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=Math.max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n1][n2];
};
