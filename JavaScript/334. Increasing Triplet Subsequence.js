/**
 * @param {number[]} nums
 * @return {boolean}
 */
var increasingTriplet = function(nums) {
    var n = nums.length;
    var ni= Infinity;
    var nj= Infinity;
    for(var k = 0; k<n; k++){
        if(nums[k]<=ni){ni=nums[k];}
        else if(nums[k]<=nj){nj=nums[k];}
        else{return true;}
    }
    return false;
};
