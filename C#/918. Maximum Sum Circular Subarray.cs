public class Solution {
    public int MaxSubarraySumCircular(int[] nums) {
        int sum=0;
        int currMax=0;
        int currMin=0;
        int maxs=Int32.MinValue;
        int mins=Int32.MaxValue;   
        foreach(int i in nums){
            sum+=i;
            currMax+=i;
            currMin+=i;
            maxs=Math.Max(maxs, currMax);
            if(currMax<0) {currMax=0;}
            mins=Math.Min(mins, currMin);
            if(currMin>0) {currMin=0;}
        }
        if(sum==mins){
            return maxs;
        }
        return Math.Max(maxs,sum-mins);
    }
}
