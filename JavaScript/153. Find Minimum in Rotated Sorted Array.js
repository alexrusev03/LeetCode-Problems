/**
 * @param {number[]} nums
 * @return {number}
 */
var findMin = function(nums) {
    var sol=nums[0];
    var l=0;
    var r=nums.length-1;
    while(l<=r){
        var mid=Math.floor((l+r)/2);
        if(nums[mid]>=nums[l]){
            if(nums[l]<sol){
                sol=nums[l];
            }
            l=mid+1;
        }
        else{
            if(nums[mid]<sol){
                sol=nums[mid];
            }
            r=mid-1;
        }
    }
    return sol;
};
