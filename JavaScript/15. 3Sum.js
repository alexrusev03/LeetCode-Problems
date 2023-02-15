/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    nums.sort((a, b) => a - b);
    var n=nums.length;
    var sol = [];
    for(var i=0;i<n-1;i++){
        var l=i+1;
        var r=n-1;
        if(i>0 && nums[i]==nums[i-1]){continue;}
        while(l<r){ 
            if(nums[i]+nums[l]+nums[r]==0){
                sol.push([nums[i],nums[l],nums[r]]);
                while(l<r && nums[l]==nums[l+1]){l++;}
                while(l<r && nums[r]==nums[r-1]){r--;}
                l++;
                r--;
            }
            else if(nums[i]+nums[l]+nums[r]<0){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return sol;
};
