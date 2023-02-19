/**
 * @param {number} target
 * @param {number[]} nums
 * @return {number}
 */
var minSubArrayLen = function(target, nums) {
    var n = nums.length;
    var res = 0;
    var i=0;
    var j=0;
    var m = Number.MAX_SAFE_INTEGER;
    while(j < n){
        while(res<target && j<n){
            res += nums[j++];
        }
        if(res<target){break;}
        while(res>=target && i < j){
            res -= nums[i++];
        }
        m = Math.min(m , j-i+1);     
    }
    return (m==Number.MAX_SAFE_INTEGER) ? 0 :m;
};
