/**
 * @param {number[]} nums
 * @return {number}
 */
var jump = function(nums) {
    var end=0;
    var idx=0;
    var c=0;
    var n=nums.length;
    if(n==1){return 0;}
    for(var i=0;i<n;i++){
        idx=Math.max(idx,i+nums[i]);
        if(i==end){
            end=idx;
            c++;
        }
        if(end>=n-1){
            return c;
        }
    }
    return 0;
};
