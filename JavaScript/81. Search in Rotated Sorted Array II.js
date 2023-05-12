/**
 * @param {number[]} nums
 * @param {number} target
 * @return {boolean}
 */
var search = function(nums, target) {
    var l = 0;
    var r = nums.length - 1;
    while(l <= r){
        var m = (r+l)/2;
        if (nums[m] == target || nums[l]==target || nums[r]==target){
            return true;
        }
        else if(nums[m] > target){
            r--;
            l++;
        }
        else{
            l++;
        }
    }
    return false;
};
