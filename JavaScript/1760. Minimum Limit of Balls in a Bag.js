/**
 * @param {number[]} nums
 * @param {number} maxOperations
 * @return {number}
 */
var minimumSize = function(nums, maxOperations) {
    var mx = 0;
    var mn = 1;
    var res = 0;
    for(var i of nums){
        mx = Math.max(mx,i);
    }
    while(mn <= mx){
        var c = 0;
        var m = Math.floor((mx+mn)/2);
        for(var i = 0; i<nums.length; i++){
            c += Math.floor((nums[i]-1)/m);
        }
        if(c>maxOperations){
            mn = m+1;
        }
        else{
            res = m;
            mx = m-1;
        }
    }
    return res;
};
