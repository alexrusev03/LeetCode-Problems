/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraySum = function(nums, k) {
    var n=nums.length;
    var count=0;
    let mp = new Map();
    mp.set(0,1);
    var sum=0;
    for(var i = 0; i<n; i++){
       sum+=nums[i];
       if (mp.has(sum-k)) count += mp.get(sum-k);
       if (mp.has(sum)) mp.set(sum, mp.get(sum)+1);
       else mp.set(sum, 1);
    }
    return count;
};
