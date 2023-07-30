/**
 * @param {number[][]} grid
 * @return {number}
 */
var closedIsland = function(grid) {
    var m=grid.length;
    var n=grid[0].length;
    var res=0;
    for(var i=1;i<m-1;i++){
        for(var j=1;j<n-1;j++){
            if(grid[i][j] == 0 && solve(i, j, m, n, grid)==true){
                res++;
            }
        }
    }
    return res;
};
var solve = function(i, j, m, n, grid){
    if(grid[i][j]==1){
        return true;
    }
    if(i==0 || j==0 || i==m-1 || j==n-1){
        return false;
    }
    grid[i][j]=1;
    var left = solve(i, j - 1, m, n, grid);
    var right = solve(i, j + 1, m, n, grid);
    var up = solve(i - 1, j, m, n, grid);
    var down = solve(i + 1, j, m, n, grid);
    return left && right && up && down;
};
