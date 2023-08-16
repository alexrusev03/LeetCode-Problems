/**
 * @param {number[]} bloomDay
 * @param {number} m
 * @param {number} k
 * @return {number}
 */
var minDays = function(bloomDay, m, k) {
    var n = bloomDay.length;
    if(m*k>n){
        return -1;
    }
    var l = 1;
    var r = Number.MAX_SAFE_INTEGER;
    while(l<r){
        var mid = Math.floor((l + r)/2);
        var f = 0;
        var b = 0;
        for(var j = 0; j<n; j++){
            if(bloomDay[j]>mid){
                f = 0;
            }
            if(bloomDay[j]<=mid){
                f++;
            }
            if(f == k){
                b++;
                f = 0;
            }
        }
        if(b < m){
            l = mid + 1;
        }
        else{
            r = mid;
        }
    }
    return l;
};
