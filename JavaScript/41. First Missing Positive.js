/**
 * @param {number[]} nums
 * @return {number}
 */
var firstMissingPositive = function(nums) {
    var n = nums.length;
    var arr = new Array(n+1).fill(0);
    for(var i = 0; i<n; i++){
        arr[i]=nums[i];
    }
    n+=1;
    for(var i = 0; i<n; i++){
        if(arr[i]<0 || arr[i]>n-1){
            arr[i]=0;
        }
    }
    for(var j = 0; j<n; j++){
        arr[arr[j]%n]+=n;
    }
    for(var k = 1; k<n; k++){
        if(Math.floor(arr[k]/n)==0){
            return k;
        }
    }
    return n;
};
