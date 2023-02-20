/**
 * @param {number[][]} isConnected
 * @return {number}
 */
var findCircleNum = function(isConnected) {
    var n= isConnected.length;
    var sol=0;
    var vis = new Array(n).fill(0);
    for(var i=0;i<n;i++){
        if(vis[i]==0){
            sol++;
            dfs(isConnected, vis,i);
        }
    }
    return sol;
};
var dfs = function(isConnected, vis,j){
    var n = isConnected.length;
    vis[j]=1;
    for(var i=0;i<n;i++){
        if(i!=j && vis[i]==0 && isConnected[i][j]==1)
            dfs(isConnected, vis, i);
    }
}
