/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    var r = 0;
    for (var i = 0; i < nums.length; i++){
        if (nums[i] == val){
            r++;
        }
        else{
            nums[i-r] = nums[i];
        }
    }
    return nums.length - r;
};
