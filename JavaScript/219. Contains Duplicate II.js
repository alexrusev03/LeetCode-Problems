/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var containsNearbyDuplicate = function(nums, k) {
    var m = new Map();
    for(var i=0; i < nums.length; i++){
        if(m.has(nums[i])){
            var j = m.get(nums[i]);
            if(i-j<=k){
                return true;
            }
        }
        m.set(nums[i],i);
    }
    return false;
};
