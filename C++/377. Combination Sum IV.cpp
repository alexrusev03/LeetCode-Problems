class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> arr(target + 1,-1);
        return helper(nums,arr,target);
    }
    int helper(vector<int>& nums,vector<int>& arr, int target) {
        if (target < 0){return 0;}
        if (arr[target] != -1){return arr[target];}
        if (target == 0){return 1;}
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            res += helper(nums,arr,target - nums[i]);
        }
        arr[target] = res;
        return arr[target];
    }
};
