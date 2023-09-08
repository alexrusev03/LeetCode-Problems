/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var mostCompetitive = function(nums, k) {
    var n = nums.length;
    var j = 0;
    var res = new Array(k).fill(0);
    for(var i = 0; i < n; i++){
        while(j != 0 && n - i > k - j && res[j - 1] > nums[i]){
            j--;
        }
        if(j < k){
            res[j] = nums[i];
            j++;
        }
    }
    return res;
};
