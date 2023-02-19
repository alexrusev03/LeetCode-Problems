class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        int i=0;
        int j=0;
        int m = INT_MAX;
        while(j < n){
            while(res<target && j<n){
                res += nums[j++];
            }
            if(res<target){break;}
            while(res>=target && i < j){
                res -= nums[i++];
            }
            m = min(m , j-i+1);     
        }
        return (m==INT_MAX) ? 0 :m;
    }
};
