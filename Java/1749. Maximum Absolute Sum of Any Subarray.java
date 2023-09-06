class Solution {
    public int maxAbsoluteSum(int[] nums) {
        int pos = Integer.MIN_VALUE;
        int curr = 0;
        for(int i = 0; i < nums.length; i++){
            curr += nums[i];
            if(curr > pos){
                pos = curr;
            }
            if(curr < 0){
                curr = 0;
            }
        }
        curr = 0;
        int neg = Integer.MAX_VALUE;
        for(int i = 0; i < nums.length; i++){
            curr += nums[i];
            if(neg > curr){
                neg = curr;
            }
            if(curr > 0){
                curr = 0;
            }
        }
        return Math.max(Math.abs(pos), Math.abs(neg));
    }
}
