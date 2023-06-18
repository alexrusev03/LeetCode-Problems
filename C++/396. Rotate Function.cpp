class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int res = INT_MIN;
        int n = nums.size();
        int sum = 0;
        int f = 0;
        for(int i=0;i<n;i++){
            f += i*nums[i];
            sum += nums[i];
        }
        for(int i=1;i<=n;i++){
            f = f + sum - n*nums[n-i];
            res = max(res, f);
        }
        return res;
    }
};
