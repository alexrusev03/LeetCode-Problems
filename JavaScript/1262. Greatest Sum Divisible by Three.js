/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSumDivThree = function(nums) {
    var arr = new Array(3).fill(0);
    for(var i of nums){
        var copy = [...arr];
        for(var j of copy){
            arr[(i+j)%3]=Math.max(arr[(i+j)%3],i+j);
        }
    }
    return arr[0];
};
