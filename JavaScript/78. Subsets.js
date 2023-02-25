/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var subsets = function(nums) {
    var res = [];
    var temp = [];
    helper(0,nums,temp,res);
    return res;
};
var helper = function(i,nums,temp,res){
    if(i==nums.length){
        res.push([...temp]);
        return;
    }
    temp.push(nums[i]);
    helper(i+1,nums,temp,res);
    temp.pop();
    helper(i+1,nums,temp,res);
};
