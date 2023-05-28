/**
 * @param {number[]} nums
 * @return {string[]}
 */
var summaryRanges = function(nums) {
    var n = nums.length;
    var res = new Array();
    for(var i = 0; i < n; i++){
        var j = i;
        while(j + 1 < n && nums[j + 1] == nums[j] + 1){
            j++;
        }
        if(j > i){
            res.push(nums[i].toString() + "->" + nums[j].toString());
        }
        else{
            res.push(nums[i].toString());
        }
        i = j;
    }
    return res;
};
