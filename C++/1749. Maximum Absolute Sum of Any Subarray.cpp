class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int pos = INT_MIN;
        int curr = 0;
        for(int i = 0; i < nums.size(); i++){
            curr += nums[i];
            if(curr > pos){
                pos = curr;
            }
            if(curr < 0){
                curr = 0;
            }
        }
        curr = 0;
        int neg = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            curr += nums[i];
            if(neg > curr){
                neg = curr;
            }
            if(curr > 0){
                curr = 0;
            }
        }
        return max(abs(pos), abs(neg));
    }
};
