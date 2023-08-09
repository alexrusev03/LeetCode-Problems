/**
 * @param {number[][]} grid
 * @return {number}
 */
var minFallingPathSum = function(grid) {
    var n = grid.length;
    var arr = new Array(n).fill(0).map(x => Array(n).fill(0));
    for(var i=0;i<n;i++){
        arr[0][i]=grid[0][i];
    }
    var res=Number.MAX_VALUE;
    for(var i=1;i<n;i++){
        for(var j=0;j<n;j++){
            var temp=Number.MAX_VALUE;
            for(var k=0;k<n;k++){
                if(k==j){
                    continue;
                }
                temp=Math.min(temp,grid[i][j]+arr[i-1][k]);
            }
            arr[i][j]=temp;
        }
    }
    for(var i of arr[n-1]){
        res=Math.min(res,i);
    }
    return res;
};
