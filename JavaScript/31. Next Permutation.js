/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var swap = function(nums, i, j){
    var t = nums[i];
    nums[i] = nums[j];
    nums[j] = t;
};
var reverse = function(nums, i, j){
    while(i<j){
        swap(nums, i++, j--);
    }
};
var nextPermutation = function(nums) {
    var i = nums.length-1;
    var j = nums.length-1;
    while(i>0 && nums[i-1]>=nums[i]) {
        i--;
    }
    if(i>0) {
        while(nums[i-1]>=nums[j]){
            j--;
        }
        swap(nums, i-1, j);
    }
    reverse(nums, i, nums.length-1);
};
