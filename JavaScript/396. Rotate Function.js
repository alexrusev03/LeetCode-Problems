/**
 * @param {number[]} nums
 * @return {number}
 */
var maxRotateFunction = function(nums) {
    var res = -Infinity;
    var n = nums.length;
    var sum = 0;
    var f = 0;
    for(var i=0;i<n;i++){
        f += i*nums[i];
        sum += nums[i];
    }
    for(var i=1;i<=n;i++){
        f = f + sum - n*nums[n-i];
        res = Math.max(res, f);
    }
    return res;
};
