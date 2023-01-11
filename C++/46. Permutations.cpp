class Solution {
public:
    void perm(int num, vector<int> &nums, vector<vector<int>> &perms, int n){
        if (num == n){
            perms.push_back(nums);
            return;
        }
        for(int i = num; i<=n; i++){
            swap(nums[num],nums[i]);
            perm(num+1,nums,perms,n);
            swap(nums[num],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size()-1;
        vector<vector<int>> perms;
        perm(0, nums, perms, n);
        return perms;
    }
};
