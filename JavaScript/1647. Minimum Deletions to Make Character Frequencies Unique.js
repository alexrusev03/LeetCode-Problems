/**
 * @param {string} s
 * @return {number}
 */
var minDeletions = function(s) {
    var arr = new Array(26).fill(0);
    for(var c of s){
        arr[c.charCodeAt(0) - 'a'.charCodeAt(0)]++;
    }
    var res = 0;
    arr.sort((a, b) => a-b);
    for(var i = 24; i >= 0; i--){
        if(arr[i] == 0){
            break;
        }
        if(arr[i] >= arr[i+1]){
            var temp = arr[i];
            arr[i] = Math.max(0, arr[i+1] -1);
            res += temp - arr[i];
        }
    }
    return res;
};
