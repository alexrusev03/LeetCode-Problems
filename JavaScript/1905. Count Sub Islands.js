/**
 * @param {number[][]} grid1
 * @param {number[][]} grid2
 * @return {number}
 */
var f = 0;
var countSubIslands = function(grid1, grid2) {
    var m = grid2.length;
    var n = grid2[0].length;
    var res = 0;
    for(var i = 0; i < m; i++){
        for(var j = 0; j < n; j++){
            if(grid2[i][j] == 1){
                f = 1;
                helper(grid1, grid2, i, j);
                res+=f;
            }
        }
    }
    return res;
}
var helper = function (grid1, grid2, i, j) {
    var m = grid2.length;
    var n = grid2[0].length;
    if(i < 0 || i == m || j < 0 || j == n || grid2[i][j] == 0){
        return;
    }
    if(grid1[i][j]==0 && grid2[i][j] == 1){
        f = 0;
    }
    grid2[i][j] = 0;
    helper(grid1, grid2, i - 1, j);
    helper(grid1, grid2, i + 1, j);
    helper(grid1, grid2, i, j - 1);
    helper(grid1, grid2, i, j + 1);
};
