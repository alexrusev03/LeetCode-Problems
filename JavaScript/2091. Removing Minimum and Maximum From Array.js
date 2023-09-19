/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumDeletions = function(nums) {
    var n = nums.length;
    var maxidx = 0;
    var minidx = 0;
    for(var i = 0; i < n; i++){
        if(nums[i] > nums[maxidx]){
            maxidx = i;
        }
        if(nums[i] < nums[minidx]){
            minidx = i;
        }
    }
    var fr  = Math.max(maxidx,minidx) + 1;
    var bc = n - Math.min(minidx,maxidx);
    var both = Math.min(minidx,maxidx) + 1 + (n - Math.max(minidx,maxidx));
    return Math.min(fr,Math.min(bc,both));
};
