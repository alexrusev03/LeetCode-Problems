public class Solution {
    public int GetMaxLen(int[] nums) {
        int res = 0;
        int n = nums.Length;
        for(int i=0;i<n;i++){
            int l = i;
            int countn = 0;
            while(l<n && nums[l] == 0){
                l++;
            }
            int curr = l;
            int begn = Int32.MinValue;
            int endn = Int32.MinValue;
            while(curr<n && nums[curr] != 0){
                if(nums[curr]<0){
                    countn++;
                    if(begn==Int32.MinValue){begn = curr;}
                    endn=curr;
                }
                curr++;
            }
            if(countn%2 == 0){
                res = Math.Max(res, curr-l);
            }
            else{ 
                if(begn!=Int32.MinValue){
                    res = Math.Max(res,curr-begn-1);
                }
                if(endn != Int32.MinValue){
                    res = Math.Max(res,endn-l);
                }
            }
            i = curr;
        }
        return res;
    }
}
