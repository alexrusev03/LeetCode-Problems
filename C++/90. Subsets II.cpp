class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        helper(0,nums,temp,res);
        return res;
    }
    void helper(int i,vector<int> &nums,vector<int> &temp,vector<vector<int>> &res){
        res.push_back(temp);
        for(int j=i;j<nums.size();j++){
            if(j>i && nums[j] == nums[j-1]){
                continue;
            }
            temp.push_back(nums[j]);
            helper(j+1,nums,temp,res);
            temp.pop_back();
        }
    }
};
