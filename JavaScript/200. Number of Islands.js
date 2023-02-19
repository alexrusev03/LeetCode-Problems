/**
 * @param {character[][]} grid
 * @return {number}
 */
var numIslands = function(grid) {
    var res=0;
    for(var i=0;i<grid.length;i++){
        for(var j=0;j<grid[0].length;j++){
            if(grid[i][j]=='0' || grid[i][j]=='2'){
                continue;
            }
            else{
                res++;
                helper(grid,i,j+1);
                helper(grid,i,j-1);
                helper(grid,i-1,j);
                helper(grid,i+1,j);
            }
        }
    }
    return res;
}
var helper = function(grid,i,j){
    if(i<0 || j<0 || i>=grid.length || j>=grid[0].length){
        return;
    }
    if(grid[i][j]=='0' || grid[i][j]=='2'){
        return;
    }
    if(grid[i][j]=='1'){
        grid[i][j]='2';
        helper(grid,i,j+1);
        helper(grid,i,j-1);
        helper(grid,i-1,j);
        helper(grid,i+1,j);
    }
};
