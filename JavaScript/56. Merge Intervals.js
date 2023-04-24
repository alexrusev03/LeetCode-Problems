/**
 * @param {number[][]} intervals
 * @return {number[][]}
 */
var merge = function(intervals) {
    var n = intervals.length;
    var res = [];
    intervals.sort((a,b)=>a[0]-b[0]);
    for(var i = 0; i<n; i++){
        if(res.length == 0 || res[res.length - 1][1] < intervals[i][0]){
            res.push(intervals[i]);
        }
        else{
            res[res.length - 1][1] = Math.max(res[res.length - 1][1], intervals[i][1]);
            res[res.length - 1][0] = Math.min(res[res.length - 1][0], intervals[i][0]);
        }
    }
    return res;
};
