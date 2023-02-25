class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        helper(0,nums,temp,res);
        return res;
    }
    void helper(int i,vector<int> &nums,vector<int> &temp,vector<vector<int>> &res){
        if(i==nums.size()){
            res.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        helper(i+1,nums,temp,res);
        temp.pop_back();
        helper(i+1,nums,temp,res);
    }
};
