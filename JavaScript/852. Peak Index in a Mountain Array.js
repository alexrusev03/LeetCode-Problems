/**
 * @param {number[]} arr
 * @return {number}
 */
var peakIndexInMountainArray = function(arr) {
    var l = 0;
    var r = arr.length;
    var res = 0;
    while(l < r){
        var m = Math.floor((r + l) / 2);
        if(arr[m] < arr[m + 1]){
            l = m + 1;
            res = m + 1;
        }
        else if(arr[m] < arr[m - 1]){
            r = m - 1;
            res = m - 1;
        }
        else{
            return m;
        }
    }
    return res;
};
