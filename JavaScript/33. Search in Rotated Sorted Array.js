/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    var n = nums.length;
    var l = 0;
    var r = n-1;
    while(l<=r){
        var m = Math.floor((l+r)/2);
        if(nums[m]==target){return m;}
        else if(nums[m]>=nums[l]){
            if(nums[m]>target && nums[l]<=target){r=m-1;}
            else{l=m+1;}
        }
        else{
            if(nums[m]<target && nums[r]>=target){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
    }
    return -1;
};
