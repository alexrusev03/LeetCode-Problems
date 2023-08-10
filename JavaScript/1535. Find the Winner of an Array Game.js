/**
 * @param {number[]} arr
 * @param {number} k
 * @return {number}
 */
var getWinner = function(arr, k) {
    var n = arr.length;
    var c = 0;
    var max = 0;
    var res = arr[0];
    if(k > n){
        for(var i = 0; i<n; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
    for(var i=1; i<n; i++){
        if(c==k){
            break;
        }
        if(arr[i] > res){
            res = arr[i];
            c = 0;
        }
        c++;
    }
    return res;
};
