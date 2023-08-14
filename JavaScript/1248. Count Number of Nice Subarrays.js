/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var numberOfSubarrays = function(nums, k) {
    var odd=0;
    var j=0;
    var count=0;
    var res=0;
    for(var i=0;i<nums.length;i++){
        if(nums[i]%2==1){
            odd++;
            count=0;
        }
        while(odd==k){
            if(nums[j]%2==1){
                odd--;
            }
            j++;
            count++;
        }
        res+=count;
    }
    return res;
};
