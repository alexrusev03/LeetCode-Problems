class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int, int> mp;
        for(auto i: nums){
            mp[i]++;
            if(mp[i]>1){
                return i;
            }
        }
        return 0;
    }
};
