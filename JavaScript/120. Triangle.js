/**
 * @param {number[][]} triangle
 * @return {number}
 */
var minimumTotal = function(triangle) {
    var n=triangle.length;
    var dp= Array(n).fill(0);
    for(var i=0; i<n; i++){
        dp[i]=triangle[n-1][i];
    }
    for(var i=n-2; i>=0; i--){
        var arr= Array(n).fill(0);
        for(var j=i; j>=0; j--){
            arr[j]=Math.min(triangle[i][j]+dp[j], triangle[i][j]+dp[j+1]);
            }
        dp=arr;
    }
    return dp[0];
};
