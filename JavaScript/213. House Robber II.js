/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function(nums) {
    var n = nums.length;
    if(n==1){return nums[0];}
    else{
        vec1 = new Array(n).fill(0);
        vec2 = new Array(n).fill(0);
        vec1[1]=nums[0];
        vec2[1]=nums[1];
        for(var i = 2; i<n; i++){
            vec1[i] = Math.max(vec1[i-1], vec1[i-2] + nums[i-1]);
            vec2[i] = Math.max(vec2[i-1], vec2[i-2] + nums[i]);
        }
        return Math.max(vec1[n-1], vec2[n-1]);
    }
};
