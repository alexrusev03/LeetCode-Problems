/**
 * @param {number[]} nums
 * @return {number}
 */
var countNicePairs = function(nums) {
    var mp = new Map();
    var res = 0;
    for(var i of nums){
        if(i - reverse(i) in mp){
            res = (res + mp[i - reverse(i)]) % 1000000007;
            mp[i - reverse(i)]++;
        }
        else{
            mp[i - reverse(i)] = 1;
        }
    }
    return res;
};
var reverse = function(i){
    var rev=0;
    while(i!=0){
        rev=rev*10 + i%10;
        i=Math.floor(i/10);
    }
    return rev;
};
