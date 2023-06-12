/**
 * @param {number[]} timeSeries
 * @param {number} duration
 * @return {number}
 */
var findPoisonedDuration = function(timeSeries, duration) {
    var res = 0;
    for (var i = 0; i < timeSeries.length; i++){
        if(i < timeSeries.length - 1){
            if (timeSeries[i] + duration - 1 < timeSeries[i+1]){
                res += duration; 
            }
            else{res += timeSeries[i+1] - timeSeries[i];}
        }
        else{res += duration;}
    }
    return res;
};
