public class Solution {
    public int MaxAbsoluteSum(int[] nums) {
        int pos = Int32.MinValue;
        int curr = 0;
        for(int i = 0; i < nums.Length; i++){
            curr += nums[i];
            if(curr > pos){
                pos = curr;
            }
            if(curr < 0){
                curr = 0;
            }
        }
        curr = 0;
        int neg = Int32.MaxValue;
        for(int i = 0; i < nums.Length; i++){
            curr += nums[i];
            if(neg > curr){
                neg = curr;
            }
            if(curr > 0){
                curr = 0;
            }
        }
        return Math.Max(Math.Abs(pos), Math.Abs(neg));
    }
}
