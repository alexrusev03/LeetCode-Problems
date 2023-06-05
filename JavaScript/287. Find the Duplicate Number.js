/**
 * @param {number[]} nums
 * @return {number}
 */
var findDuplicate = function(nums) {
    var l = 1;
    var r = nums.length - 1;
    var c = 0;
    while(l <=  r){
        var m = Math.floor((r + l) / 2);
        c = 0;
        for(var i = 0; i<nums.length; i++){
            if(nums[i] <= m){
                c++;
            }
        }
        if(c > m){
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    return l;
};
