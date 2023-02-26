class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums){
        vector<vector<int>> res;
        int n=nums.size();
        helper(0,nums,res,n);
        sort(nums.begin(), nums.end());
        return res;
    }
    void helper(int idx,vector<int> nums, vector<vector<int>> &res, int n){
        if(idx==n){
            res.push_back(nums);
            return;
        }
        for(int i=idx; i<n; i++){
            swap(nums[idx],nums[i]);
            bool found = find(res.begin(), res.end(), nums) != res.end();
            if(found==true){
                continue;
            }
            helper(idx+1,nums,res,n);
            swap(nums[idx],nums[i]);
        }
    }
};
