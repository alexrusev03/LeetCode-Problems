/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function(nums) {
    var end=0;
    var idx=0;
    var n=nums.length;
    for(var i=0;i<n;i++){
        idx=Math.max(idx,i+nums[i]);
        if(i==end){
            end=idx;
        }
    }
    if(end>=n-1){return true;}
    return false;
};
