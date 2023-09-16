class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        vector<int> res;
        unordered_map<int, int> mp;
        if(n % 2 == 1){
            return {};
        }
        sort(changed.begin(), changed.end());
        for(int i: changed){
            mp[i]++;
        }
        for(int j: changed){
            if(mp[j]==0){
                continue;
            }
            if(mp[2*j]==0){
                return {};
            }
            res.push_back(j);
            mp[j]--;
            mp[2*j]--;
        }
        return res;
    }
};
