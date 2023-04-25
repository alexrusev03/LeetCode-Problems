/**
 * @param {string} s
 * @param {string} p
 * @return {boolean}
 */
var isMatch = function(s, p) {
        var dp=new Array(s.length+1).fill(false).map(() => new Array(p.length+1).fill(false));
        dp[0][0]=true;
        for(var i=0;i<p.length;i++){
            if(p[i]=='*'){
                dp[0][i+1]=dp[0][i];
            }
        }
        for(var i=1;i<s.length+1;i++){
            for(var j=1;j<p.length+1;j++){
                if(s[i-1]==p[j-1] || p[j-1]=='?'){
                        dp[i][j]=dp[i-1][j-1];
                }
                else if(p[j-1]=='*'){
                        dp[i][j]=dp[i-1][j]||dp[i][j-1];
                }
                else{
                    dp[i][j]=false;
                }
            }
        }
        return dp[s.length][p.length];
};
