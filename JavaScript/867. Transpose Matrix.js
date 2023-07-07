/**
 * @param {number[][]} matrix
 * @return {number[][]}
 */
var transpose = function(matrix) {
    var res = new Array(matrix[0].length).fill(0).map(item => new Array(matrix.length).fill(0));
    for(var i=0; i < matrix.length; i++){
        for (var j = 0; j < matrix[0].length; j++){
            res[j][i] = matrix[i][j];
        } 
    }
    return res;
};
