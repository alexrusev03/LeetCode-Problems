/**
 * @param {number[][]} matrix
 */
var NumMatrix = function(matrix) {
    var m = matrix.length;
    var n = matrix[0].length;
    this.dp = Array.from(Array(m+1), () => new Array(n+1).fill(0))
    for(var i = 1 ; i <= m; i++){
        for(var j = 1; j <= n; j++){
                this.dp[i][j] = matrix[i-1][j-1] + this.dp[i-1][j] + this.dp[i][j-1] - this.dp[i-1][j-1];
        }
    }
};
/** 
 * @param {number} row1 
 * @param {number} col1 
 * @param {number} row2 
 * @param {number} col2
 * @return {number}
 */
NumMatrix.prototype.sumRegion = function(row1, col1, row2, col2) {
    return this.dp[row2+1][col2+1] - this.dp[row1][col2 + 1] - this.dp[row2 + 1][col1] + this.dp[row1][col1];
};

/** 
 * Your NumMatrix object will be instantiated and called as such:
 * var obj = new NumMatrix(matrix)
 * var param_1 = obj.sumRegion(row1,col1,row2,col2)
 */
