/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
    if(x <= 1)
        return x;
    var l = 0, r = x;
    while(l <= r){
        var m = Math.floor(l + (r-l)/2);
        if(x / m == m)
            return m;
        else if(x / m < m)
            r = m-1;
        else
            l = m+1;
    }
    return r;
};
