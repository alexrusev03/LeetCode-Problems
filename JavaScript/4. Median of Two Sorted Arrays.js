/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    var n1=nums1.length;
    var n2=nums2.length;
    for(var i=n1; i<n1+n2;i++){
        nums1.push(nums2[i-n1]);
    }
    function sortNumber(a,b) {
        return a-b;
    }
    nums1.sort(sortNumber);
    if((n1+n2)%2==0){
        var num1=(n1+n2)/2-1;
        var num2=(n1+n2)/2;
        var med1=(nums1[num1]+nums1[num2])/2;
        return med1;
    }
    else{
        var med2=Math.floor((n1+n2)/2);
        return nums1[med2];
    }
    return 0;
};
