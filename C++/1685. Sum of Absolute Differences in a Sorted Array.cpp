class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> p(n);
        vector<int> res(n);
        p[0] = nums[0];
        for(int i = 1; i < n; i++){
            p[i] = nums[i] + p[i - 1];
        }
        res[0] = p[n - 1] - p[0] - (n - 1) * nums[0];
        for(int i=1; i<n; i++){
            res[i] = p[n - 1] - p[i - 1] - p[i] - (n - 2*i - 1) * nums[i];
        }
        return res;
    }
};
