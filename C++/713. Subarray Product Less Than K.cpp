class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int res=0;
        int j=0;
        int prod=1;
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];
            while(j<= i&& prod>=k) {
                prod/=nums[j++];
            } 
            res += i-j+1;
        }
        return res;
    }
};
