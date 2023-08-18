/**
 * @param {number[]} nums
 * @return {number[]}
 */
var minSubsequence = function(nums) {
    var n=nums.length;
    var rest=0;
    var sum=0;
    var res = new Array();
    nums.sort((a,b) => a-b);
    for(var i=0; i<n; i++){
        rest+=nums[i];
    }
    for(var j=n-1; j>=0; j--){
        sum+=nums[j];
        rest-=nums[j];
        res.push(nums[j]);
        if(sum>rest){
            break;
        }
    }
    return res;
};
