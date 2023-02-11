/**
 * @param {number[]} nums
 * @return {number}
 */
var deleteAndEarn = function(nums) {
        var n = 10001;
        sum = new Array(n).fill(0); 
        arr = new Array(n).fill(0);
        for(var i of nums){
            sum[i] += i;
        }
        arr[0] = 0; arr[1] = sum[1];
        for(var i=2;i<n;i++){
            arr[i] = Math.max(arr[i-2] + sum[i], arr[i-1]);
        }
        return arr[n-1];
};
