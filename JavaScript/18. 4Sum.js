/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[][]}
 */
var fourSum = function(nums, target) {
    var res=[];
    var n=nums.length;
    nums.sort((a, b) => a - b);
    for(var i=0;i<n-3;i++){
        for(var j=i+1;j<n-2;j++){
            var l=j+1;
            var r=n-1;
            while(l<r){
                var sum=nums[i]+nums[j]+nums[l]+nums[r];
                if(sum==target){
                    res.push([nums[i],nums[j],nums[l],nums[r]]);
                    var t1 = l;
                    var t2 = r;
                    while(l<r && nums[l]==nums[t1]){
                        l++;
                    }
                    while(l<r && nums[r]==nums[t2]){
                        r--;
                    }
                }
                else if(sum<target){
                    l++;
                }
                else {
                    r--;
                }
            }
            while(j<n-2 && nums[j]==nums[j+1]){
                j++;
            }
        }
        while(i<n-3 && nums[i]==nums[i+1]){
            i++;
        }
    }
    return res;
};
