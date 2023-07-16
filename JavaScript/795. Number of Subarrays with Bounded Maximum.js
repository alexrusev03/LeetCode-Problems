/**
 * @param {number[]} nums
 * @param {number} left
 * @param {number} right
 * @return {number}
 */
var numSubarrayBoundedMax = function(nums, left, right) {
    var res = 0;
    var l = -1;
    var r = -1;
    for (var i = 0; i < nums.length; i++) {
        if(nums[i] > right){
            l = i;
        }
        if(nums[i] >= left){
            r = i;
        }
        res += r-l;
    }
    return res;
};
