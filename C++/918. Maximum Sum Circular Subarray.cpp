class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        int currMax=0;
        int currMin=0;
        int maxs=INT_MIN;
        int mins=INT_MAX;   
        for(int i: nums){
            sum+=i;
            currMax+=i;
            currMin+=i;
            maxs=max(maxs, currMax);
            if(currMax<0) {currMax=0;}
            mins=min(mins, currMin);
            if(currMin>0) {currMin=0;}
        }
        if(sum==mins){
            return maxs;
        }
        return max(maxs,sum-mins);
    }
};
