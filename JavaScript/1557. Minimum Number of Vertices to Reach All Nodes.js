/**
 * @param {number} n
 * @param {number[][]} edges
 * @return {number[]}
 */
var findSmallestSetOfVertices = function(n, edges) {
    var ans=[];
    var check=Array(n).fill(0);
    for (e of edges){
        check[e[1]]=1;
    }
    for (var i = 0; i < n; ++i){
        if (check[i] == 0){
            ans.push(i);
        }
    }
    return ans;
};
