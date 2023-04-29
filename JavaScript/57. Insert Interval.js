/**
 * @param {number[][]} intervals
 * @param {number[]} newInterval
 * @return {number[][]}
 */
var insert = function(intervals, newInterval) {
    var n=intervals.length;
    var res = new Array();
    for(var i = 0; i<n; i++) {
        if(intervals[i][1] < newInterval[0]){
            res.push(intervals[i]);
        }
        else if(newInterval[1] < intervals[i][0]){
            res.push(newInterval);
            newInterval=intervals[i];
        }
        else{
            newInterval[0]=Math.min(newInterval[0],intervals[i][0]);
            newInterval[1]=Math.max(newInterval[1],intervals[i][1]);
        }    
    }
    res.push(newInterval);
    return res;
};
