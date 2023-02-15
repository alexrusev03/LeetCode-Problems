class Solution {
    public int getMaxLen(int[] nums) {
        int res = 0;
        int n = nums.length;
        for(int i=0;i<n;i++){
            int l = i;
            int countn = 0;
            while(l<n && nums[l] == 0){
                l++;
            }
            int curr = l;
            int begn = Integer.MIN_VALUE;
            int endn = Integer.MIN_VALUE;
            while(curr<n && nums[curr] != 0){
                if(nums[curr]<0){
                    countn++;
                    if(begn==Integer.MIN_VALUE){begn = curr;}
                    endn=curr;
                }
                curr++;
            }
            if(countn%2 == 0){
                res = Math.max(res, curr-l);
            }
            else{ 
                if(begn!=Integer.MIN_VALUE){
                    res = Math.max(res,curr-begn-1);
                }
                if(endn != Integer.MIN_VALUE){
                    res = Math.max(res,endn-l);
                }
            }
            i = curr;
        }
        return res;
    }
}
