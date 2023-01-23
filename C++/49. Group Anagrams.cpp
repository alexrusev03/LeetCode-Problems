class Solution {
public:
       vector<vector<string>> groupAnagrams(vector<string>& strs) {
           int n = strs.size();
           unordered_map<string,vector<string>> mp;
           vector<vector<string>> sol;
           for(int i = 0;i<n;i++){
               string str = strs[i];
               sort(str.begin(),str.end());
               mp[str].push_back(strs[i]);
            }
           for(auto i:mp) sol.push_back(i.second);
           return sol;
    }
};
