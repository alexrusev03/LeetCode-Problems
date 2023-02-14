class Solution {
    public int maxSubarraySumCircular(int[] nums) {
        int sum=0;
        int currMax=0;
        int currMin=0;
        int maxs=Integer.MIN_VALUE;
        int mins=Integer.MAX_VALUE;   
        for(int i: nums){
            sum+=i;
            currMax+=i;
            currMin+=i;
            maxs=Math.max(maxs, currMax);
            if(currMax<0) {currMax=0;}
            mins=Math.min(mins, currMin);
            if(currMin>0) {currMin=0;}
        }
        if(sum==mins){
            return maxs;
        }
        return Math.max(maxs,sum-mins);
    }
}
