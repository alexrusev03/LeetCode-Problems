/**
 * @param {number[]} nums
 * @return {number[]}
 */
var majorityElement = function(nums) {
    var n = nums.length;
    var res = new Array();
    var map = {};
    for(var i=0; i<n; i++){
        if(map[nums[i]]){
            map[nums[i]]++;
        }
        else{
            map[nums[i]] = 1;
        }
    }
    const key = Object.keys(map);
    for(let i = 0 ; i< key.length;i++){
        if(map[key[i]] > n/3){
            res.push(key[i]);
        }
    }
    return res;
};
