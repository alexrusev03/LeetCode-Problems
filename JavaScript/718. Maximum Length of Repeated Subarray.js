/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findLength = function(nums1, nums2) {
    var m=nums1.length;
    var n=nums2.length;
    var res=0;
    var arr = new Array(m+1).fill(0).map(x => Array(n+1).fill(0));
    for(var i=1; i<m+1; i++){
        for(var j=1; j<n+1; j++){
            if(nums1[i-1]==nums2[j-1]){
                arr[i][j]=arr[i-1][j-1]+1;
                res=Math.max(arr[i][j],res);
            }
        }
    }
    return res;
};
