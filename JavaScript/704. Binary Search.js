/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    var l = 0;
    var n = nums.length;
    var r = n-1;
    while(l<=r){
        var mid=Math.floor((l+r)/2);
        if (nums[mid]==target){
            return mid;
        }
        else if (nums[mid]<target){
            l= mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
};
