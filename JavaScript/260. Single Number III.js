/**
 * @param {number[]} nums
 * @return {number[]}
 */
var singleNumber = function(nums) {
    var mp = new Map();
    var res = new Array(2);
    for(var i of nums){
        if(mp[i]){
            mp[i]++;
        }
        else{
            mp[i] = 1;
        }
    }
    var idx = 0;
    for(var i of nums){
        if(mp[i]==1){
            res[idx] = i;
            idx++;
        }
    }
    return res;
};
