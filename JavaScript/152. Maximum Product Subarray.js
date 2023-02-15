/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function(nums) {
    var n = nums.length;
    var l = 1;
    var r = 1;
    var ans = Number.MIN_SAFE_INTEGER;
    for(var i = 0; i<n; i++){
        if(l==0){l=1;}
        if(r==0){r=1;}
        l=l*nums[i];
        r=r*nums[n-i-1];
        ans = Math.max(ans, Math.max(l,r));
    }
    return ans;
};
