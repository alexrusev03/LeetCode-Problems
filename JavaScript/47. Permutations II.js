/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var permuteUnique = function(nums) {
    var res = [];
    var n=nums.length;
    helper(0,nums,res,n);
    return res;
};
var helper = function(idx,nums,res,n){
    if(idx==n){
        var temp =[];
		for(var i = 0 ; i<n ; i++){
		    temp.push(nums[i]);
		}
		res.push(temp);
        return;
    }
    var rec = new Set();
    for(var i=idx; i<n; i++){
        if(rec.has(nums[i])){continue;}
        swap(idx, i, nums);
        helper(idx+1,nums,res,n);
        swap(idx, i, nums);
        rec.add(nums[i]);
    }
};
var swap = function(i,j,nums){
    var k=nums[i];
    nums[i]=nums[j];
    nums[j]=k;
};
