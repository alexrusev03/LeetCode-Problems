/**
 * @param {number[][]} graph
 * @return {number[][]}
 */
var allPathsSourceTarget = function(graph) {
    var res = [];
    var temp = [];
    var vis=graph.length-1;
    temp.push(0);
    solve(graph,0,res,temp,vis);
    return res;
};
var solve = function(graph,n,res,temp,vis){
    for(var j of graph[n]){
        temp.push(j);
        if(j==vis){
            res.push(Array.from(temp));
        }      
        solve(graph,j,res,temp,vis);        
        temp.pop(); 
    }
};
