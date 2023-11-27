/**
 * @param {number[][]} points
 * @return {number}
 */
var minCostConnectPoints = function(points) {
    var n = points.length;
    var ans = 0;
    var j = 0;
    var k = 1;
    var cost = new Array(n).fill(10000000);
    while(k < n){
        cost[j] = Number.MAX_VALUE;
        var min_j = j;
        for(var i = 0; i < n; i++){
            if(cost[i] != Number.MAX_VALUE){
                cost[i] = Math.min(cost[i], Math.abs(points[j][0] - points[i][0]) + Math.abs(points[j][1] - points[i][1]));
                if(cost[i] < cost[min_j]){
                    min_j = i;
                }
            }
        }
        ans += cost[min_j];
        j = min_j;
        k++;
    }
    return ans;
};
