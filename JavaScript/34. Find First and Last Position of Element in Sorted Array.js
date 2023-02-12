/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
        var pos = [-1,-1];
        var n = nums.length;
        var idx=0;
        for(var i = 0; i<n; i++){
            if(nums[i]==target){
                if(pos[0]==-1){
                    pos[0]=i;
                }
                idx=Math.max(i,idx);
            }
        }
        if(pos[0]!=-1){
            pos[1]=idx;
        }
        return pos;
};
