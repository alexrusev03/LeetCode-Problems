/**
 * @param {number[]} nums
 * @return {number}
 */
var pivotIndex = function(nums) {
    var list = new Array();
    var sum=0;
    for(var i = 0; i<nums.length; i++){
        sum+=nums[i];
        list.push(sum);
    }
    var n = list.length;
    if(sum==list[0]){
        return 0;
    }
    for(var i=1;i<n;i++){
        if(list[i-1]==list[n-1]-list[i]){
            return i;
        }
    }
    return -1;
};
