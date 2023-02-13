public class Solution {
    public int MaxSubArray(int[] nums) {
        int curMax = 0, maxTillNow = Int32.MinValue;
        foreach(int c in nums){
            curMax = Math.Max(c, curMax + c);
            maxTillNow = Math.Max(maxTillNow, curMax);
            if(curMax<0) {curMax = 0;}
        }
        return maxTillNow;
    }
}
