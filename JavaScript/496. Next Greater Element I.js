/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var nextGreaterElement = function(nums1, nums2) {
    var res = new Array(nums1.length);
    for(var i = 0; i<nums1.length; i++){
        var f = -1;
        var pos = p(nums2,nums1[i]);
        for(var j = pos + 1; j<nums2.length; j++){
            if(nums2[j]>nums1[i]){
                f=nums2[j];
                break;
            }
        }
        res[i]=f;
    }
    return res;
}
var p = function(nums2, k){
    var n = nums2.length; 
    for (var i = 0 ; i < n ; i ++){
        if (nums2[i] == k){
            return i; 
        }
     }
    return -1; 
};
