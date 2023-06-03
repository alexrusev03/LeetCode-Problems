/**
 * @param {number} k
 * @param {number} n
 * @return {number[][]}
 */
var combinationSum3 = function(k, n) {
    var res = new Array();
	var temp = new Array();
    combination(res, temp, k, 1, n);
    return res;
};
var combination = function(res, temp, k,  b, n) {
    if (temp.length == k && n == 0) {
        res.push(new Array(...temp));
    }
    for (var i = b; i <= 9; i++) {
	    temp.push(i);
	    combination(res, temp, k, i+1, n-i);
	    temp.pop();
    }
};
