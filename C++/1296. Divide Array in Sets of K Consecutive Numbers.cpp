class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();
        if(n%k != 0){
            return false;
        }
        map<int,int> mp;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n; i++){
            mp[nums[i]]++;
        }
        for(int i = 0; i<n; i++){
            if(mp[nums[i]] > 0){
                for(int j = nums[i] + 1; j < nums[i] + k; j++){
                    if(mp[j] == 0){
                        return false;
                    }
                    mp[j]--;
                }
                mp[nums[i]]--;
            }
        }
        return true;
    }
};
