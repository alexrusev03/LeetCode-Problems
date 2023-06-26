class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> mp;
        vector<int> res;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i: nums){
            if(mp[i]==1){
                res.push_back(i);
            }
        }
        return res;
    }
};
