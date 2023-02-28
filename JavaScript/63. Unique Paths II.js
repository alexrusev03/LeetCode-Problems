/**
 * @param {number[][]} obstacleGrid
 * @return {number}
 */
var uniquePathsWithObstacles = function(obstacleGrid) {
    var m=obstacleGrid.length;
    var n=obstacleGrid[0].length;
    var dp = Array.from({length: m}, el => new Uint32Array(n));
    return helper(m-1,n-1,obstacleGrid,dp);
}
var helper = function(m,n,obstacleGrid, dp){
    if(m<0 || n<0 || obstacleGrid[m][n]==1){
        return 0;
    }
	if(m==0 && n==0){
        return 1;
    }
    if(dp[m][n]!=0){
        return dp[m][n];
    }
    var l=helper(m,n-1,obstacleGrid,dp);
    var u=helper(m-1,n,obstacleGrid,dp);
    return dp[m][n]=l+u;
}
