/**
 * @param {number[]} nums
 * @return {number}
 */
var getMaxLen = function(nums) {
    var res = 0;
    var n = nums.length;
    for(var i=0;i<n;i++){
        var l = i;
        var countn = 0;
        while(l<n && nums[l] == 0){
            l++;
        }
        var curr = l;
        var begn = Number.MIN_SAFE_INTEGER;
        var endn = Number.MIN_SAFE_INTEGER;
        while(curr<n && nums[curr] != 0){
            if(nums[curr]<0){
                countn++;
                if(begn==Number.MIN_SAFE_INTEGER){begn = curr;}
                endn=curr;
            }
            curr++;
        }
        if(countn%2 == 0){
            res = Math.max(res, curr-l);
        }
        else{ 
            if(begn!=Number.MIN_SAFE_INTEGER){
                res = Math.max(res,curr-begn-1);
            }
            if(endn != Number.MIN_SAFE_INTEGER){
                res = Math.max(res,endn-l);
            }
        }
        i = curr;
    }
    return res;
};
