/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    var n=nums.length;
    var ans=new Array(2*n);
    for(var i=0; i<2*n; i++){
        if(i<n){ans[i]=nums[i];}
        else{ans[i]=nums[i-n];}
    }
    return ans;
};
