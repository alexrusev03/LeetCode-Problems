/**
 * @param {number[]} nums
 * @return {number}
 */
var repeatedNTimes = function(nums) {
    var mp = new Map();
    for(var i of nums){
        if(!mp[i]){
            mp[i] = 1;
        }
        else{
            mp[i]++;
        }
        if(mp[i]>1){
            return i;
        }
    }
    return 0;
};
