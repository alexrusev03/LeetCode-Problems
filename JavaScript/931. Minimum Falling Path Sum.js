/**
 * @param {number[][]} matrix
 * @return {number}
 */
var minFallingPathSum = function(matrix) {
    var n = matrix.length;
    var l = 0;
    var r = 0;
    for(var i = 1; i < n; i++){
        for(var j = 0; j < n; j++){
            if(j==0){
                l = Number.MAX_SAFE_INTEGER;
                r=matrix[i-1][j+1];
            }
            else if(j==n-1){
                r = Number.MAX_SAFE_INTEGER;
                l=matrix[i-1][j-1];
            }
            else{
                r=matrix[i-1][j+1];
                l=matrix[i-1][j-1];
            }
            matrix[i][j]=matrix[i][j]+Math.min(matrix[i-1][j], Math.min(l, r));
        }
    }
    var res = Number.MAX_SAFE_INTEGER;
    for(var j=0;j<n; j++){
        res = Math.min(res, matrix[n-1][j]);
    }
    return res;
};
