class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1){return nums[0];}
        else{
        int prev2 = nums[0];
        int prev = max(prev2,nums[1]);
        
        int result;
        for(int i = 2; i<n; i++){
            result = max(prev, prev2+nums[i]);
            prev2=prev;
            prev=result;
        }
        return prev;}
    }
};
