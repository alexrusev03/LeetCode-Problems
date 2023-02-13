/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    var curMax = 0;
    var maxTillNow = Number.MIN_SAFE_INTEGER;
    for(var c of nums)
        curMax = Math.max(c, curMax + c),
        maxTillNow = Math.max(maxTillNow, curMax);
    return maxTillNow;
};
