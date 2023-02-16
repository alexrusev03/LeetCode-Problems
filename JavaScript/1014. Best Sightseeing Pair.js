/**
 * @param {number[]} values
 * @return {number}
 */
var maxScoreSightseeingPair = function(values) {
    var j= values[0];
    var res= 0;
    for(var i=1;i<values.length;i++){
        res=Math.max(res, j+values[i]-i);
        j=Math.max(j, values[i]+i);
    }
    return res;
};
