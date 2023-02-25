/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var subsetsWithDup = function(nums) {
    nums.sort();
    var res = [];
    var temp = [];
    helper(0,nums,temp,res);
    return res;
}
var helper = function(i,nums,temp,res){
    res.push([...temp]);
    for(var j=i;j<nums.length;j++){
        if(j>i && nums[j] == nums[j-1]){
            continue;
        }
    temp.push(nums[j]);
    helper(j+1,nums,temp,res);
    temp.pop();
    }
};
