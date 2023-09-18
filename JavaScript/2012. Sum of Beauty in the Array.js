/**
 * @param {number[]} nums
 * @return {number}
 */
var sumOfBeauties = function(nums) {
    var n = nums.length;
    var r = new Array(n).fill(0);
    var l = new Array(n).fill(0);
    r[n - 1] = nums[n - 1];
    l[0] = nums[0];
    for(var i = n - 2; i >= 0; i--){
        r[i] = Math.min(r[i + 1], nums[i]);
    }
    for(var i = 1; i < n; i++){
        l[i] = Math.max(l[i - 1], nums[i]);
    }
    var res = 0;
    for(var i = 1; i < n - 1; i++){
        if(nums[i] > l[i - 1] && nums[i] < r[i + 1]){
            res += 2;
        }
        else if(nums[i] > nums[i - 1] && nums[i] < nums[i + 1]){
            res++;
        }
    }   
    return res;
};
