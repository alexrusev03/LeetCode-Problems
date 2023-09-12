/**
 * @param {number[][]} matrix
 * @return {number}
 */
var largestSubmatrix = function(matrix) {
    var m = matrix.length;
    var n = matrix[0].length;
    var res = 0;
    for(var i = 1; i < m; i++){
        for(var j = 0; j < n; j++){
            if(matrix[i][j] != 0){
                matrix[i][j] = matrix[i-1][j] + 1;
            }
        }
    }
    for(var i = 0; i < m; i++){
        matrix[i].sort((a, b) => a - b);
        for(var j = 0; j < n; j++){
            res = Math.max(res, matrix[i][j] * (n - j));
        }
    }
    return res;
};
