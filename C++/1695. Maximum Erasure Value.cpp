class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int res = 0;
        int curr = 0;
        int j = 0;
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
            curr += nums[i];
            while(mp[nums[i]] > 1){
                curr -= nums[j];
                mp[nums[j]]--;
                j++;
            }
            res = max(res, curr);
        }
        return res;
    }
};
